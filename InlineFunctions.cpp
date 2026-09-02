#include<iostream>
using namespace std;

inline int product(int a, int b)//formal paramters take value from actual paramters
{
    //do not use inline with static
    //static int c =0;//initialization , this execute only once
    //c= c+1;//next time this will run , the value of c will  be retained
    return a*b;
}
// default values are those which we get by default if we dont get any value
float moneyReceived( int currentMoney, float Interest = 1.04)
   {
    return currentMoney*Interest;
   }
  // int strelen(const char*p)
  // const is used if assigned values are not to be modified later.
 int main()
 {
    int a,b;
    //cout<<"enter the value of a and b";
    //cin>>a>>b;
    //cout<<"the product of a and b is:"<<product(a,b)<<endl;
    int money = 100000;
    cout<< "if you have"<<money <<"rd in your bank account, you will receive"<<moneyReceived(money)<<"rs after 1 year"<<endl;
    cout<< "for VIP, if you have"<<money<<"rd in your bank account, you will receive"<<moneyReceived(money,1.1 );
    return 0;
}