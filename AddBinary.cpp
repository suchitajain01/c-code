#include<iostream>
using namespace std;
class Solution
{
        public:    
        string AddBinary(string a, string b)
        {
        //'-0' means convert char to int
        //'+0' means convert int to char

        //we are going right to left
        int i = a.length()-1;  //last character
        int j = b.length()-1;

        int carry = 0;

        string result = "";

        while(i>=0 || j>=0 || carry) 
        {
            //either i or j can be 1 or 0
        int sum = carry;
        if(i>=0)
        sum+=a[i--] - '0';   //convert char to int;('0'/'1' to int)
        
        if(j>=0)
        sum+=b[j--] - '0';  

       //int to char
        result = char((sum % 2) + '0') + result;  //result bit (sum%2)
        carry = sum/2;  //  (/) gives quotient, convert to bits
        }

     return result;

    }
};