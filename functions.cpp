#include<iostream>
using namespace std;


//FIND IF NUMBER IS PRIME 

bool prime(int n)
{
    if (n<=1)
    return 0;

for(int i = 2;i<=n;i++)
{
    if(n%i==0)
    return 0;

}
return 1;
}


int main()
{
   int num, result;
   cin>>num;
   result = prime(num);
   
    
}





//FIND FACTORIAL OF A NUMBER

int factorial(int n) //value of a is passed here
{
   
    int fact = 1;
    for(int i = 1;i<=n;i ++)
    {
        fact = fact*i;
    }
    return fact;
   


}

int main()
{

int a,f;
cin>>a;
f = factorial(a); // a is actual parameter
cout<<f;
return 0;

}







//FIND NUMBER IS PRIME OR COMPOSITE 

bool prime(int n)
{
    if (n<=1)
    return 0;

for(int i = 2;i<=n;i++)
{
    if(n%i==0)
    return 0;

}
return 1;
}


int main()
{
   int num, result;
   cin>>num;
   result = prime(num);
   return 0;
   
}




// TO FIND SUM OF DIGITS Q  

int sumOfDigit(int num)
{
    int sum = 0;
    while(num>0)
    {
    int dig = num%10;
    sum = sum + dig;
    num = num/10;
    }

    return sum;

}

int main()
{
    int no,p;
    cin>>no;
    p = sumOfDigit(no);
    cout<<p;
    return 0;

}




//TO CHECK NUMBER IS PALINDROME USING  FUNCTIONS

bool isPalindrome(int num)
{
    int temp = num;
    int rev;
    while(num>0)
    {
        int dig = num%10;
        rev = rev*10 + dig;
        num = num/10;
        
    }
     return (rev == temp);

}

int main()
{   
    int q;
    q = isPalindrome(44);
    cout<<q;
    return 0;
}