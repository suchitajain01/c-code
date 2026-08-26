#include<iostream>
using namespace std;

int sum(float a , int b)  // function declaration
{
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c)  
{
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}
int volume (double r, int h)
{
 return(3.14*r*r*h); // volume of cylinder
}
int main()
{
    cout<<"the sum of 3 and 6 is"<<sum(2,3)<<endl;
    cout<<"the sum is"<<sum(4,5,6)<<endl;
    cout<<"colume of cyliner "<<volume(9,3)<<endl;
    return 0;
}


/*

int sum(int , int) //function declaration


int main()
{
int a,b,c;
cout<<"enter the number";
cin>>a>>b>>c;
c = sum(a,b);   //function calling

cout<<"the sum of two nos is:"<<c"
return 0;

}


int sum(int x, int y) // function defination
{
  
int z;
z = x+y;
return z;


}





*/
