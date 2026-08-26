//INSERTION SORT
//1. using functions
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {8, 3, 5, 2};
    int n = 4;

    insertionSort(arr, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}


//2. using vectors
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& nums)
{
    int n = nums.size();

    for(int i = 1; i < n; i++)
    {
        int key = nums[i];
        int j = i - 1;

        while(j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = key;
    }
}

int main()
{
    vector<int> nums = {8, 3, 5, 2};

    insertionSort(nums);

    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}


//3. recursions
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr, int n)
{
    if(n <= 1)
        return;

    insertionSort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while(j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}

int main()
{
    vector<int> arr = {8,3,5,2};

    insertionSort(arr, arr.size());

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}




//SELECTION SORT
//Using functions
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[] = {8, 3, 5, 2};
    int n = 4;

    selectionSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

//using vector
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& nums)
{
    int n = nums.size();

    for(int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for(int j = i+1; j < n; j++)
        {
            if(nums[j] < nums[minIndex])
            {
                minIndex = j;
            }
        }

        swap(nums[i], nums[minIndex]);
    }
}

int main()
{
    vector<int> nums = {8, 3, 5, 2};

    selectionSort(nums);

    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

//3. recurions

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& nums, int start)
{
    int n = nums.size();

    if(start >= n-1)
        return;

    int minIndex = start;

    for(int i = start + 1; i < n; i++)
    {
        if(nums[i] < nums[minIndex])
        {
            minIndex = i;
        }
    }

    swap(nums[start], nums[minIndex]);

    selectionSort(nums, start + 1);
}

int main()
{
    vector<int> nums = {8, 3, 5, 2};

    selectionSort(nums, 0);

    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}
