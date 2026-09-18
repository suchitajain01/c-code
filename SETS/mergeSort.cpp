/*
arr1 = [2,36,10,15,25,30,35]
arr2 = [3,5,8,20,22]
newARR = merge arr1 and arr2 on the basis  of their increasing values


*/

#include <bits/stdc++.h>
using namespace std;

vector<int> C;
void Merge(vector<int> A, int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }

        else

        {

            C[k] = A[j];
            j++;
            k++;
        }
    }

    while (i <= mid) //if any element left 
    {
        C[k] = A[i];
        j++;
        k++;
    }

    while (j <= high)
    {
        C[k] = A[j];
        j++;
        k++;
    }

     for (int i = low; i <= high; i++)
    {
        A[i] = C[i];
    }
}
void MergeSort(vector<int> A, int low, int high)
{

    if (low < high)

    {
        int mid = (low + high) / 2;
        MergeSort(A, low, mid);
        MergeSort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

int main()
{
    int n;
    cin >> n;
    C.resize(n);
    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {

        cin >> A[i];
    }
    MergeSort(A,0,n-1 );

    cout<<"Sorted Array";

    for(int i =0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }



}