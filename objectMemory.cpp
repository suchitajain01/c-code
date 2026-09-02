#include<iostream>
using namespace std;

class Shop
{
    int itemId[100]; // array
    int itemPrice[100]; //array
     int counter; // track how many items have already added in array

     public:
     void initCounter (void) //function
     {
        counter = 0;
     }
    void getPrice(void);
    void setPrice(void);
    void displayPrice(void);
};


void Shop :: setPrice(void)
{
cout<<"enter id of your item"<<counter+1<<endl;
cin>>itemId[counter];
cout<<"enter price of your item"<<endl;
cin>>itemPrice[counter];
counter++;
}


void Shop :: displayPrice(void)
{
    for(int i = 0; i<counter;i++)
    {
        cout<<"the price of item with id"<< itemId[i] << "is"<< itemPrice[i]<<endl;
    }
}


int main()
{
    Shop dukaan; //object
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}



