//Wap to implement the doubly linked list for operation addatbegininng and display the nodes pointed;
/*
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
        
    }
};

    void addatbeg(Node **head, int value)
    {
        Node* newNode = new Node(value);
         newNode-> next = *head;
        if(*head != NULL)
        {

            *head ->prev = newNode;
        }
          
        *head = newNode;

    }

    
    void display(Node *head)
    {
        Node *temp = head;
        while(temp !=NULL)
        {
         cout<<temp->data;
         temp =  temp->next;   
        }

        cout<< NULL;

    }
   
    int main()
    {
      
        Node *head = NULL;
        head->next = new Node(63);

        addatbeg(&head,102);
        addatbeg(&head,95);
        addatbeg(&head, 67);
        display(head);
        return 0;


    }
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

//SEARCHING 
bool search(Node*head,int key)
{
Node*current = head;
while(current!=NULL)
{
    if(current->data == key)
    return true;
    current = current->next;

}
  return false;

}



    // 🔸 Insert at Beginning
    Node* insertAtBeginning(Node* head, int val) {
        Node* newNode = new Node(val);
      
        newNode->next =  head;
        newNode->prev = NULL;


        if (head != NULL) {
            head->prev = newNode;
        }

        head = newNode;

        return head;
    }



    // 🔸 Insert at End
     Node* insertAtEnd(Node* head, int val) {
        Node* newNode = new Node(val);

        //if list is empty 
        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) { //transverse to the last node 
            temp = temp->next;     //go to last node 
        }

        temp->next = newNode; 
        newNode->prev = temp;
    }

    //insertion at end whe  head and tail both given

    Node* insertionAtEnd(Node* &head, Node* &tail, int value)
    {
     Node* newNode = new Node(value);

     if(head == NULL)
    {
     head = newNode;
     tail = newNode;
    }
    return head;

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;

    }


    // 🔸 Insert at Position (1-based)
    Node* insertAtPosition(Node*head, int index, int val) 
    {
       Node* newNode = new Node(val);
        if(index == 0)
        {
            newNode->next = head;
            newNode->prev = NULL;
        

        //transverse node to the end
        if(head !=NULL)
        {
            head->prev = newNode;
        }

        return newNode;
        }

     Node*temp = head;
     int Currentindex = 0;
 //move to (index-1) position
     while(temp!=NULL && Currentindex<index-1 )
     {
        temp =temp->next;
        Currentindex++;

     }

     //if index is of range
    if(temp == NULL)
    {
    cout<<"index out of range"<<endl;
    delete newNode;
    return head;
    }

    //insert node
    newNode->next = temp->next;
    newNode->prev  =temp;

    if(temp-> next!=NULL)
    {
        temp->next->prev = newNode;

    }

    temp->next = newNode;


    return head;
    }




    //insert after a value
    Node* insertAfterValue(Node* head, int target, int value)
    {
        Node* temp = head;
        
        while(temp!=NULL && temp->data !=target)
{
    temp = temp->next;
}

if(temp == NULL)
{
    cout<<"value"<<target<<"not found in this list"<<endl;
    return head;
}

Node* newNode = new Node(value);

//link new node
newNode->next = temp->next;
newNode->prev = temp;

if(temp->next!=NULL)
{
    temp->next->prev = newNode;
}

//link target node to new node
temp->next  =newNode;

    
    return head;


    }



    // 🔸 Delete from Beginning
    Node* deleteFromBeginning(Node* head ) {

        if (head == NULL) 
            cout << "List is empty\n";
            return;
     //single node
      if(head->next == NULL)
      {
       delete head;
       return NULL;

      }
     

    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;


    return head;

    }



    // 🔸 Delete from End
    Node* deleteFromEnd(Node* head) {
        
        if (head == NULL) {
            cout << "List is empty\n";
            return NULL ;
        }

        Node*temp = head;
        while(temp->next!=NULL)
        {
            temp =temp->next;
        }
  //tarnserve the node until it reaches last node 

     temp->prev->next = NULL;
     delete temp;

     return head;

    }


    //delete last node when head and tail is given

    Node* deleteLastNode(Node* &head, Node* &tail)
    {

  
        Node *delNode = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete delNode;


    }







    // 🔸 Delete from Position
    Node* deleteFromPosition(int index, Node*head)
     {
    
        Node*temp = head;
        int currentIndex = 0;

        while(temp!=NULL && currentIndex < index)
        {
        temp = temp->next;
        currentIndex++;
        }

        if(temp == NULL)
        return head;

        temp->prev->next = temp->next;
        if(temp->next !=NULL)
        {
            temp->next->prev = temp->prev;
        }

        delete temp;
        return head;
    }

  Node* deleteAfterValue(Node* head, int target) {
    if (head == NULL) return head;

    Node* temp = head;

    // Find the node with target value
    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }

    // If target not found or no next node
    if (temp == NULL || temp->next == NULL) {
        return head;
    }

    Node* delNode = temp->next;

    // Adjust links
    temp->next = delNode->next;

    if (delNode->next != NULL) {
        delNode->next->prev = temp;
    }

    delete delNode;
    return head;
}


//display function is same in every operation of the list

void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}


int main() {
    Node* head = NULL;

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 5);
    insertAtEnd(head, 20);
    insertAtPosition(head, 15, 3);

    cout << "After Insertions:\n";
    display(head);

    deleteFromBeginning(head);
    deleteFromEnd(head);
    deleteFromPosition(head, 2);

    cout << "After Deletions:\n";
    display(head);

    return 0;
}



   













    /*

    // 🔸 Traverse Forward
    void traverseForward() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // 🔸 Traverse Backward
    void traverseBackward() {
        Node* temp = head;

        if (temp == NULL) return;

        // go to last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // traverse backward
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL\n";
    }
};

// 🔹 Main Function
int main() {
    DoublyLinkedList dll;

    dll.insertAtBeginning(10);
    dll.insertAtBeginning(5);
    dll.insertAtEnd(20);
    dll.insertAtPosition(2, 15);

    cout << "Forward: ";
    dll.traverseForward();

    cout << "Backward: ";
    dll.traverseBackward();

    dll.deleteFromBeginning();
    dll.deleteFromEnd();
    dll.deleteFromPosition(2);

    cout << "After Deletions: ";
    dll.traverseForward();

    return 0;
}


*/





