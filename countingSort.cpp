#include <iostream>
#include <vector>
using namespace std;

void countingSort(vector<int>& arr) {
    int n = arr.size();

    // Step 1: Find maximum element
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    // Step 2: Create count array
    vector<int> count(maxVal + 1, 0);

    // Step 3: Store frequency
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Step 4: Convert to cumulative frequency
    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }

    // Step 5: Build output array (stable)
    vector<int> output(n);
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Step 6: Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    countingSort(arr);

    cout << "Sorted array:\n";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}