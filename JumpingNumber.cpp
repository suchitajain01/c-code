#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
 int n;
 cin>>n;
 for(int i= 0 ;i<=n;i++)
 {
   string s = toString(i);
   int len = s.length();
   
   if(len ==1)
   {
    cout<<i<<"";

   }

   else if ((s[len-1] - s[len -2] == 1) || (s[len - 2] - s[len -1]==1))
   {
      cout<<i<<" ";

   }
 }

 return 0;
}



