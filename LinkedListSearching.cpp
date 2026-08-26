//determine wheather the given key is present in the given linked list
#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int value)
    {
     data = value;
     next = NULL;
    }

};


bool search(Node* head,int key)
{
    Node*current = head; //inititlaisation

    while(current!=NULL) //condition
    {
       if(current->data == key)
       { 
        return true;  //if found the  value

       }
    current = current->next; //increament 
    }

    return false; //key not found

}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    int key;
    cin>>key; //enter the value 

    if(search(head,key))
    {
        cout<<"found"<<endl;

    }
    else
    {

        cout<<"Not found"<<endl;
    }


    return 0;

}







