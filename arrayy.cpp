#include <iostream>
using namespace std;

int main()
{
    int i, arr[10], sum = 0;
    cout<<"enter the array elemets";
    for(i = 0;i<10;i++)
    {
        cin>>arr[i];
    }

cout<<"the sum of elements of array are:"<<endl;
for(i = 0;i<10;i ++)
{
    sum = sum + arr[i];
}

cout<<sum;
return 0;
}


