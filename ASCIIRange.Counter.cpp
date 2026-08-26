#include<iostream>
using namespace std;

/*
Given a string (S) of length K, and two integers, N and M.
Count the number of characters, whose ASCII value is within
the range defined by N, M (both inclusive). Given that N < M.*/

int main()
{
 string str;
 int k,n,m;
 int count;

 cin>>k>>n>>m;  
 cin>>str;

 for(int i = 0;i<=k;i++)
 {
    if(int (str[i])>=n && (str[i]<= m))
{
     count++;
}

 }
return 0;
}

