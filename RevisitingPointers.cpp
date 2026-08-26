#include<iostream>
using namespace std;

int main()
{
    //basic example
    int a = 4;
    int*ptr = &a; // a ke address ko ptr me put kiya

    cout<<"the value of a is:" <<*(ptr)<<endl; //value of ptr

    //nre keyword
    //int *p = new int(40);
    float *p = new float(40.78);
    cout<<"the value at address p is"<<*(p)<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    
    cout<<"the value of arr[0]"<<arr[0]<<endl;
    cout<<"the value of arr[1]"<<arr[1]<<endl;
    cout<<"the value of arr[2]"<<arr[2]<<endl;
    return 0;
}










