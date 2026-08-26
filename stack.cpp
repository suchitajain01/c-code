#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> item;
    int Top;

    public:

    Stack(int s){  //constructor
        item.resize(s);
        Top=-1;
    }


    //PUSH OPERATION
    void Push(int x){  
        if(Top==item.size()-1){     
            cout<<"Stack Overflows"<<endl;
            return;
        }
        else{
        Top++;
        item[Top]=x;
        }
    }



    //POP OPERATION
    int Pop(){
        if(Top==-1){
            cout<<"Stack Underflows"<<endl;
            return -1;
        }
        else{
        int x;
        x = item[Top];
        Top--;
        return x;
        }
    }


    int StackTop(){
        int x;
        x = item[Top];
        return x;
    }


    
    bool IsEmpty(){
        if(Top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack stk(20);
    // stk.Push(1);
    // stk.Push(2);
    // stk.Push(3);
    // stk.Push(4);
    // stk.Push(5);
    // stk.Push(6);
    // // cout<<stk.StackTop()<<endl;
    // // stk.Pop();
    // // cout<<stk.StackTop()<<endl; 
    // // stk.Pop();
    // // stk.Pop();
    // // stk.Pop();
    // // stk.Pop();
    // // stk.Pop();
    // // stk.Pop();
    // // cout<<stk.StackTop()<<endl; 
    // stk.Push(7);
    // stk.Push(8);
    // stk.Push(9);
    // stk.Push(10);
    // stk.Push(11);

int N;
    cin>>N;
    while(N!=0){
      int r = N%2;
      stk.Push(r);
      N/=2;
 } 

    while(!stk.IsEmpty()) {
         cout<<stk.Pop();
    }
}