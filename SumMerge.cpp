#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;
    int arr[N];
    int arr1[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        cin >> arr1[i];
    }

    int n = sizeof(arr);
    int m = sizeof(arr1);

    // array after merging 2 arrays in sorted way

    int merged = n + m;
    int i = 0, j = 0; // pointers

    for (int k = 0; k < n + m; k++)
    {
        if (i < n && j < m)
        {
            if (arr[i] < arr1[j]) // FIRST ALL ELEMENTS OF 1ST ARRAY WILL BE COMPARED TO 1st element of next array
            {
                merged[k] = arr[i++];
            }
            else
            {
                merged[k] = arr[j++];
            }
        }
        // for the remaining elements
        else if (i < n)
        {
            merged[k] = arr[i++];
        }

        else
            (i < m)
            {
                merged[k] = arr1[j++];
            }
    }
    for (int p = 0; p < n + m; p++)
    {
        cout << merged[p] << " ";
    }

    return 0;
}
