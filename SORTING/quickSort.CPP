#include <bits/stdc++.h>
using namespace std;

int partition( vector<int> &arr, int low , int high)
{
int pivot = arr[low];
int i =low;
int j = high+1;

while(i<j)
{
do
{
  i++;
}
while(i<=high && arr[i]<pivot);

do
{
  j--;
}
  while(arr[j]>pivot);

if(i>=j)
break;

swap(arr[i],arr[j]);


}
swap(arr[j],arr[low]);
return j;

}


int quickSort(vector<int>&arr, int low, int high)
{
if(low<high)
{
int j = partition(arr,low,high);
quickSort(arr, low, j-1);
quickSort(arr, j+1, high);
}

}

void printArray(vector<int>&Arr)
{
for(int val : Arr)
{
  cout<<val<<" ";
}
}

int main()
{

vector<int>arr = {10, 7, 8, 9, 1, 5};
int n = arr.size();

printArray(arr);
quickSort(arr, 0, n-1);
cout<<endl;
printArray(arr);


}