#include <bits/stdc++.h>
using namespace std;

void bucketSort(float arr[], int n)
{
  vector<float> bucket[n]; //create buckets 

  //put elements into buckets 
  for(int i =0;i< n;i++)
  {
    int index = n*arr[i];
    bucket[index].push_back(arr[i]);
  }

  //sort each bucket 
  for(int i =0;i<n;i++)
  {
    sort(bucket[i].begin(), bucket[i].end());
  }
  //hamne value bucket me le li thi 7

 //merge buckets 
  int k =0;
  for(int i =0;i<n;i++) //goes through each bucket 
  {
    for(float  val: bucket[i]) //goes through inside element of each bucket 
    {
      arr[k++] = val; //take element from bucket put it inside original array

    } 
  }
}

int main()
{
    float arr[] = {0.42,0.32,0.23,0.52, 0.25,0.47};
    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr,n);

    cout<< "sorted array";
    for(int i =0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;

}







