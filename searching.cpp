#include <bits/stdc++.h>
#include <vector>
using namespace std;
                                              // LINEAR SEARCH
int main()
{
    /*
    int n, key;

    // Input size of array
    cout << "Enter number of elements: ";
    cin >> n;

    // Declare vector
    vector<int> arr(n);

    // Input elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Input element to search
    cout << "Enter element to search: ";
    cin >> key;

    // Linear search
    int flag = -1; // 0 means not found

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = i;
            break; // Exit loop once found
        }
    }

    if (flag != -1)
    {
        cout << "Element " << key << " found at index " << flag << endl;
    }
    else
    {
        cout << "Element " << key << " not found in the array." << endl;
    }
    return 0;
}

*/

                                // BINARY SEARCH
 #include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, key;
    
    // Input size of array
    cout << "Enter number of elements: ";
    cin >> n;
    
    // Declare vector
    vector<int> arr(n);
    
    // Input elements
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // Sort the array (REQUIRED for binary search)
    sort(arr.begin(), arr.end());
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Input element to search
    cout << "Enter element to search: ";
    cin >> key;
    
    // Binary search
    int left = 0;
    int right = n - 1;
    int position = -1;  // -1 means not found
    
    while(left <= right)
    {
        int mid = left + (right - left) / 2;  // Find middle index
        
        if(arr[mid] == key)
        {
            position = mid;
            break;  // Element found
        }
        else if(arr[mid] < key)
        {
            left = mid + 1;  // Search in right half
        }
        else
        {
            right = mid - 1;  // Search in left half
        }
    }
    
    // Display result
    if(position != -1)
    {
        cout << "Element " << key << " found at index " << position << endl;
    }
    else
    {
        cout << "Element " << key << " not found in the array." << endl;
    }
    
    return 0;
}
