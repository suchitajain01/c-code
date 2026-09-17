#include <iostream>
using namespace std;

class Complex; // forward declaration
// ek class ke function ko dusre class ka friend
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    friend int Calculator ::sumRealComplex(Complex o1, Complex o2);// one function of calculator class is accessing the private data members of class complex
    //Aliter : declaring entire calculation class as friend of complex
    // friend class Calculator;
public:
    void setNo(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNo()
    {
        cout << "your number is" << a << "+" << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex o1, o2;
    o1.setNo(1, 4);
    o2.setNo(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "the sum of real part o1 and o2 is" << res << endl;
    return 0;
}
