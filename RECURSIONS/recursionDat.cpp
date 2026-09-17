#include <iostream>
#include <vector>

using namespace std;

vector<int> dat(1001,0);
int fib(int n)
{
if(n==1)
{
    return 0;
}

else if(n==2)
{
    return 1;
}

else if(dat[n]==0)
{
    dat[n] = fib(n-1) + fib(n-2);
}

return dat[n];

}

int main()
{
    cout<<fib(1000)<<endl;
}