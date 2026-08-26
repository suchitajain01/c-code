#include <iostream>
using namespace std;
// PALINDROME NUMBER - reverse of the number is equal to number

/*
int main()
{
    int num, rev =0 , digit, a;
    cout<<"enter the number:";
    cin>>num;

    while(num>0)
    {
        digit = num%10; // to extract digits from the number
        rev = rev*10 + digit;
        num = num/10;


    }

    if(rev == num)

        cout<<"palindrome number";
        else
        cout<<"not a palindrome number:";



    return 0;
}
*/

// ARMSTRONG NUMBER - sum of cube of digits is equal to sum
/*
    int main()
{
    int num, sum = 0,  digit, temp;
    cout<<"enter the number:";
    cin>>num;
    temp = num;

    while(num>0)
    {
        digit = num%10; // to extract digits from the number (gives reminder)
        sum += digit*digit*digit;
        num = num/10; //(givess quotient )


    }

    if( sum == temp)
    {
    cout<<"ARMSTRONG NUMBER";
    }
    else
    {
    cout<<"not the number";
    }
    return 0;

}
*/

// MAGIC NUMBER - repeated sum of digits become 1
/*
int main()
{

int num, sum = 0,  digit, temp;
    cout<<"enter the number:";
    cin>>num;


    while(num>9)
    {
       sum = 0;
       while(num > 0)
       {
        digit = num%10; //extract digit
        sum+= digit;
        num = num/10;

       }
        num = sum;


    }

    if(num == 1)
    {
        cout<<"MAGIC NUMNER";
    }
    else

    {
        cout<<"Not a magic number";
    }

}
*/

// AUTOMORPHIC NUMBER - NUMBER WHOSE SQUARE ENDS WITH THE SAME NUMBER
/*
int main()
{
    int temp,
    num, dig;
long sq = num * num;

temp = num;

while (temp > 0)
{
    if (temp % 10 != sq % 10)
    {
        cout << " not number";
    return 0;
    }
    temp = temp / 10;  
    sq = sq / 10;
}
cout<<"automorphic number";
return 0;
}


 / - removes the last digit
 % - gives the last digit 



// FIBONACCI SERIES - Example ( 0,1,1,2,3,5,8) each digit is the sum of previous two
/*
int main()
{
    int a = 0, b = 1,c, num;
    cin>>num;

    cout<<a<<" "<<b;
    c = a+b;

    cout<<c<<" ";

    a = b;
    b = c;


  return 0;
}
*/

// FACTORIAL OF A GIVEN NUMBER
/*
int main()
{
int n,fact 1;
cin>>n;

for(int i = 1;i<=n;i++)
{

    fact = fact*i;
}

cout<<fact;
return 0;
}
*/

// SUM OF DIGITS USING FOR LOOP
/*
int main()
{
    int i,num, sum = 0, digit;
    cin>>num;

    for( i = num; i> 0; i = i/10)
    {
        digit = num %10;
        sum = sum + digit;
    }
    return 0 ;

}
*/

/*
// SPECIAL NUMBER - sum of factorial of digits = number
// EXAMPLE - 1! + 4! + 5! =  145

int main()
{
    int n, temp, digit, sum = 0;
    cin >> n;
    temp = n;

    int fact = 1;
    ;
    while (temp > 0)
    {
        digit = temp % 10; // generate last digit of the number 
        for (int i = 1; i <= digit; i++)

            fact *= i; // factorial of a given number

        sum = sum + fact;
        temp = temp / 10;  //removes the last digit 
    }

    if (sum == temp)

        cout << "Special Number";
    else
        cout << "Not Special";
}


// SPY NUMBER - sum of digits = product of digits
int main()
{
   int n = 0 , sum = 0, pro = 1, digit;
   cin>>n;

   int temp = n;

   for( int i = n ; i>0 ; i = i/10)
   {
    digit = n % 10;
    sum = sum + digit;
    pro = pro * digit;
   }
/*
 while(num>0)
 {
    digit = n%10;
    sum = sum + digit;
    pro = pro * digit;
    n = n/10;
 
 }
   if(sum == pro)
   
    cout<<"given numnber is sp number ";
    else
    cout<<"not the sspy number";
   return 0;

}


// PERFECT NUMBER - 
// sum of all proper divisor (excluding the number itself) is equal to number

int main()
{

    int n, sum =0;
    cin>>n;

    for(int i = 0 ; i <n; i++) //proper divisors(excluding the number itself)
    {
        if(n%i ==0) 
        sum = sum+ i;
    
    }

    if(sum == n)
    {
        cout<<"perfect number";
    }
    else
    {
        cout<<"not a perfect number";
    }

}

*/