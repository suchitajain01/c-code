#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Insert at beginning
void insertAtBeginning(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head; // head jo hai vo new node ke next part ko point krega
    head = newNode;
}

// Insert at end
void insertAtEnd(Node* &head, int val) {
    Node* newNode = new Node(val);

    //empty list 
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;  //transversing the list 
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}
//insee=rting at the end when both head and tail is given

void InsertAtEnd(Node* &head, Node* &tail,  int val)
{
    Node* newNode = new Node(val);

    //if list is empty
    if(head == NULL)
    {
      head =  newNode;
      tail = newNode;
      return;

    }
   //attach at the end
    tail->next = newNode;
   
    //uldate tail pointer
    tail = newNode;


}



// Insert at specific position (1-based index)
Node* insertAtPosition(Node* &head, int val, int index) {
  
    Node* newNode = new Node(val);
    //insert at the beginning 
    if (index == 0) {
        newNode->next= head;
        return newNode;
    }

    //if index is out of bounds
   Node*temp = head;
   int currentIndex = 0;

    if(temp ==NULL)
    {
        cout<<"index out of ra66nge"<<endl;
        delete newNode;
        return head;

    }

    //at (index-1)position 
    while(temp!=NULL && currentIndex < index -1)
    {
        temp= temp->next;
        currentIndex++;
    }
   
    //at at particular index
    






}


//inserton after some specific value
Node* insertAfterValue(Node*head,int target, int value)
{
    Node* temp = head;
    if(temp == NULL)
    {
        cout<<"value"<<target<<"not foudn in this list";
        return head;

    }

    //transverse to find the target value
   while(temp != NULL && temp->data!=target)
   {
    temp=temp->next;
   }

   //insert new node after the target
   Node *newNode = new Node(value);
   newNode->next = temp->next;
   temp->next = newNode;


   return head;


}




// Delete from beginning
void deleteFromBeginning(Node* &head) {
    if (head == NULL) return;

    Node* temp = head; //store current head
    head = head->next; //move head to the next node
    delete temp;
}



// Delete from end
Node* deleteFromEnd(Node* &head) {
    //list is empty 
    if (head == NULL) return head;

    //it reaches the end 
   
    if (head->next == NULL) { //single node
        delete head;
        head = NULL;
        return head ;
    }

    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    
    Node* delNode = temp->next;
    temp->next = NULL;
     delete delNode;

    return head;

}
//both tail an head is given , delete second last node of the list
Node* deleteLastNode(Node* head,Node* prevTail )
{
  if(head == NULL)
  {
    cout<<"List is empty ,nothing to delete";
    return NULL;

  }
  
  if(prevTail == NULL)
  {
  delete head;
  head = NULL;
  return NULL;
  }
  
  //Delete the last node
  delete prevTail -> next;
  prevTail->next = NULL;


  return head;


}





// Delete from specific position
Node* deleteFromPosition(Node* &head, int index) {
    if (head == NULL) return;

    //delete first node
    if (index == 0) {
        Node*temp =head;
        head = head->next;
        delete temp;
        return head;
        

    }
    //
    Node* temp = head;
    
     if (temp->next == NULL) {
        cout << "Position out of range\n";
        return;
    }

    //transverse to the ndode just before the end
    Node* temp = head;
    int currentIndex = 0;
    while(temp!=NULL && currentIndex < index-1)
    {
        temp=temp->next;
        currentIndex++;
    }

    //delete node at index;
    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
}


//delete node after given a value
Node* deleteNode(Node* head, int target )
{
Node*temp = head;
while(temp!=NULL && temp->data!=target)
    {
        return head;

      }

 Node* deleteNode = temp->next;
 temp->next = deleteNode->next;
delete deleteNode;

return head;




}



//display function is same in every operation of the list
// Display list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Main function
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