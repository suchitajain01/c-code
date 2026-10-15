#include <bits/stdc++.h>
using namespace std;

int power(int a , int n)
{
    if(n==0)
    return 1;

    else

    return a*power(a,n-1);



}

int power2(int a, int n)
{
    int x;
if(n ==0)
return 1;

else

x = power2(a,n/2);


if(n%2==0)
{
    return x*x;
}

else
{
return a*x*x;
    
}

}


int main()
{
 int p1 = power(2,5);
 int p2 = power2(4,5);
 cout<<"power of 2^5 is :"<<p1<<endl;
 cout<<"power of 4^5 is :"<<p2<<endl;

}
