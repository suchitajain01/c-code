
#include <iostream>
using namespace std;

/*
Case 1:
class B: public A{
// order of execution of constructor: > first A() then B()
};


};
Case2:
class A : public B, public C
{
//order of execution of constructor -> b(), then C() and A()
}

case3:
class A: public b, virtual public C;
{
order of execution of constructor -> C(), B(), A()

}

*/

class Base
{
int data;
 public :
  Base(int i)
    {
        data = i;
        cout << "base class constructor" << endl;
    }

    void printData(void)
    {
        cout << "the value of data is :" << data << endl;
    }
};


class base2
{
    int data2;

    public:
    base2(int i)
    {
    data2 = i;
    cout<<"base2 class constructor called"<<endl;
    }

    void printData2(void)
    {
        cout<<"the value of data2 is :"<<data2<<endl;
    }




};

class Derived : public Base , public base2
{
int derived1, derived2;
public:
Derived(int a, int b, int c,int d): Base(a), base2(b)
{
derived1 = c;
derived2 = d;
cout<<"the value of derived1 is : "<<derived1<<endl;
cout<<"the value of derived2 is:" <<derived2<<endl;
}

void show(void)
{
    printData();
    printData2();

}
};


int main()
{

    Derived harry(1,2,3,4);
    harry.show();
   //harry.printData();
   //harry.printdata1() 
    return 0;
}