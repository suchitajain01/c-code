#include <iostream>
using namespace std;

// BUBBLE SORT
int main()
{
    int i, j, size, temp;
    cout << "enter the size";
    cin >> size;
    int a[size];
    cout << "Enter the elements of array:";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    // INTERCHANGING THE ELEMENTS to arrange the elementd in ascending order

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "the sorted array is:"<<endl;
    for (i = 0; i < size; i++)
    {

        cout << a[i]<<endl;
    }

    return 0;
}
