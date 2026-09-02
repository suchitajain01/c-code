#include <iostream>
using namespace std;

// Function to get maximum element
int getMax(int arr[], int n) {
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

// Counting Sort according to digit (exp)
void countingSort(int arr[], int n, int exp) {
    int output[n]; // output array
    int count[10] = {0};

    // Count occurrences
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp ) % 10]++; //frequency 

    // Change count[i] so that it contains actual position
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1]; //how many numbers <= this digit (cumulative frequency )

    // Build output array (stable sorting)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit]-1] = arr[i]; //exact index in output array
        count[digit]--; //lessen the count of repeated digit
    }

    // Copy to original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}



// Main Radix Sort function
void radixSort(int arr[], int n) {
    int m = getMax(arr, n);

    // Do counting sort for every digit
    for (int exp = 1; m / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

// Driver code
int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    radixSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}