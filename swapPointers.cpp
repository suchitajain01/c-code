#include<iostream>
using namespace std;

int sum(int a , int b)
{
int c = a +b;
return c;
}
// this will not swap a and b
int swap(int a , int b)
{
    int temp = a;
    a = b;
    b = a;
}
void swapPointer(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

//void swapPointer(int &a , int &b)// this will swap by reference variable
//{
 //temp = a;
//a = b;
//b =a;
//}

int main()
{
    int x=4;
    int y = 5;
    //cout<<"the sum of 4 and 5:"<<sum(4,5)
    cout<<"the value of x is"<<x<<"and the value of y is"<<y<<endl;
    //swap (x,y);//this will not swap a and b
    swapPointer(&x,&y);//this will swap a and b by pointer variable
    // swapPointer(x,y) = 766; this will swap a and b reference variable
    cout<<"the value of x is"<<x<<"and the value of y is"<<y<<endl;
    return 0;
}

