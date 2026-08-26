#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cin>>a>>b;

swap(a,b);      //function calling

cout<<"the value of the swapping are"<<a<<b;
return 0;

}

void swap(int a,int b)  //function defination
{
 int t;
 t = a;
 a = b;
 b = t;

cout<<"the values are"<<a<<b;

}