#include <iostream>
using namespace std;

// TO PRINT MAXIMUM ELEMENT IN ARRAY
/*
int main()
{

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0]; // Assume first element is the largest

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }

    cout << "Maximum element in the array is: " << max << endl;

    return 0;
}
*/

// TO print even element of the array
/*
int main()
{
    int arr[5];
    cout<<"enter the elements of the array";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];


    }

cout<<"even elements of the array are:"<<endl;
   for(int i = 0; i < 5;i++)
    {
        if(arr[i]%2 ==0)
        {
        cout<< arr[i] <<endl;

        }

    }
   return 0;
}

*/

// TO PRINT PRIME NUMBER OF THE ELEMENT OF THE ARRAY

/*
int main()
{
    int num, count;

    int arr[10];
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "prime number from the given set of array is:" << endl;
    for (int i = 0; i < 10; i++)
    {

        int num = arr[i];
        int count = 0; 

        if (num > 1)
        {
            
            // count no of factors
            for (int j = 1; j <= num; j++)
            {
                if (num % j == 0)
                    count++;
            }
        
                // prime factor has exactly 2 factors (1 and no itself)
                if (count == 2)
                {
                    cout << num << endl;
                }
        }

    }
    return 0;
}

*/


