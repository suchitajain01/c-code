#include<iostream>
using namespace std;

int fib(int n)//n will get value from actual agrument ie. a
{
    if(n<2)// if asked at 0 or 1 postion
    {
        return 1;
    }
    return fib(n-2) + fib(n-1); // to find factorial of nth term
}
// fib(5 ) = fib(4)+fib(3)
// fib(4) = fib(3) + fib(2)
//fib(3) = fib(2) + fib(1)
int factorial(int n)
{
    if(n<=1)
    {
    return 1;
    }
    return n* factorial(n-1);//if not 1 and 0
//only true for o and 1 
}

int main()
{
    int a;
    //factorial of a number
    // n! = n*(n-1)
    cout<<"enter a number:" <<endl;
    cin>>a;
    cout<<"the term in fibonacci sequence  at postion"<<a<<" is "<<fib(a)<<endl;
    return 0;

}

