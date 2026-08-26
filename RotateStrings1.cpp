#include<iostream>
#include<string>
using namespace std;

/*
Rotate the given string S of length N by K places towards left.
Given that K <= N.
*/

int main()
{
    int N,K;
    string str;

    cin>>N>>K;
    cin>>str;

    N = str.length();

    string str1 = str.substr(K,N-1) + str.substr(0,K);  //string appended
    cout<<str1;
   
    return 0;


}

