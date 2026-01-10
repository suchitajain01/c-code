/* Given an alphanumeric string S .let the sum of squares of digits in S to be k. If k is even, rotate
the alphabets of S rightwards by k positions, otherwise rotate it leftwards by k positions . Prrint the rotated string.
*/

#include<iostream>
using namespace std;

int main()
{
 string S,res;
int N, K;
cin>>K;
cin>>S;

 for(int i = 0;i<K;i++)
 {
   if(S[i]>='0' && S[i]<='9')
   {
     K= K+ S[i]*S[i]; //SUM OF SQUARES OF DIGITS IN S TO BE K

   }
     if(K%2==0)
     {
     K = K % res.length();
     cout<< res.substr(N-K,K) + res.substr(0,N-K);  //RIGHT ROTATE
     }
    

     else
     {
      K = K% res.length();
      cout<<res.substr(0,K) + res.substr(K,N-K); //LEFT ROTATE

     
     
     }
 }




}
