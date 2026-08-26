#include<iostream>
using namespace std;

class Complex;
int real,imaginary;
public:

void getData()
{
    cout<<"the real part is:"<<real<<end
    cout<<"the imaginary part is"<<imaginary<<endl;

}

void setData(int a,int b)
{
  real = a;
  imaginary = b;
  
};
   n   n 

int main()
{

//Complex c1;
//Complex*ptr = &c;
Complex*ptr = new Complex;

//(*ptr).setData(1,54); // is exactly same as 
ptr->setData(1,54);

//Array of objects
Complex *ptr = new Complex;
ptr -> setData(1,54);
ptr ->getData();

//array of objects
Complex *ptr1 = new Complex[4];
ptr1 ->setData(1,4);
ptr1 ->getData();

return 0;
}
//How to access the public members of the objects with a pointer 
