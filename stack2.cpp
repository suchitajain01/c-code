#include <bits/stdc++.h>
using namespace std;

void decimalToBinary(int n)
{
    int binary[32], i =0;

    if(n==0)
    {
        cout<<"binary: 0";
        return;
    }

while(n>0)
{
 binary[i] = n&2;
 n= n/2;
 i++;
}
    cout<<"binary";
    for(int j = i-1;j>=0;j--)
    {
     cout<<binary[j];
    }


}

void decimaltoOctal()

















}
