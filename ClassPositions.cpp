#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // n is the number of students

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];   // to input marks of 'n' number of students 
    }

    for (int i = 0; i < n; i++) 
    {
        int rank = 1;
        for (int j = 0; j < n; j++)  // to compare adjacent elements of the array
        {
            if (arr[j] > arr[i])
            {
                rank++;
            }
            cout << rank << "";
        }
    }

    return 0;
}
