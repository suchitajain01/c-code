#include<iostream>
using namespace std;
/*
Given a string (S) of length N, and an integer (K). Print S, after
stripping the first K and the last K characters. You can
assume that 2K < N.
*/

int main()
{
    int N,K;
    string str;

    cin>>N>>K;
    cin>>str;

    for(int i = 0;i<=N;i++)
    {
        str.substr(K ,str.length() - 2*K ) ; //(starting index position, length to be printed)
            cout<<str;

    }
    return 0;

}