#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert at beginning
Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    // Case 1: Empty list
    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    Node* temp = head;

    // Traverse to last node
    while (temp->next != head) {
        temp = temp->next;
    }

    // Insert at beginning
    temp->next = newNode;
    newNode->next = head;
    head = newNode;

    return head;
}

// Function to display circular list
void display(Node* head) {
    if (head == NULL) return;

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(head)" << endl;
}

int main() {
    Node* head = NULL;

    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);

    display(head);

    return 0;
}

//Function to insert at the end 

Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    // Case 1: Empty list
    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    Node* temp = head;

    // Traverse to last node
    while (temp->next != head) {
        temp = temp->next;
    }

    // Insert at end
    temp->next = newNode;
    newNode->next = head;

    return head;
}



//Function to delete node at beginning
Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    // Case 1: Empty list
    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    Node* temp = head;

    // Traverse to last node
    while (temp->next != head) {
        temp = temp->next;
    }

    // Insert at end
    temp->next = newNode;
    newNode->next = head;

    return head;
}


//FUNCTION TO DELETE NODE FROM END
Node* deleteAtEnd(Node* head) {
    // Case 1: Empty list
    if (head == NULL) {
        return NULL;
    }

    // Case 2: Only one node
    if (head->next == head) {
        delete head;
        return NULL;
    }

    Node* temp = head;

    // Find second last node
    while (temp->next->next != head) {
        temp = temp->next;
    }

    Node* delNode = temp->next;  // last node

    // Remove last node
    temp->next = head;

    delete delNode;

    return head;
}

//FUNCTION TO INSERT NODE AT ANY POSITION
Node* insertAtPosition(Node* head, int value, int Index) {
    Node* newNode = new Node();
    newNode->data = value;

    // Case 1: Empty list
    if (head == NULL) {
        if (Index == 1) {
            newNode->next = newNode;
            return newNode;
        } else {
            cout << "Invalid position\n";
            return head;
        }
    }

    // Case 2: Insert at beginning
    if (Index == 1) {
        Node* temp = head;

        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
        head = newNode;

        return head;
    }

    // Case 3: Insert at other positions
    Node* temp = head;
    int currentIndex = 1;

    while (currentIndex < Index - 1 && temp->next != head) {
        temp = temp->next;
        currentIndex++;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

Node* deleteAtPosition(Node* head, int pos) {
    // Case 1: Empty list
    if (head == NULL) {
        cout << "List is empty\n";
        return NULL;
    }

    // Case 2: Delete first node
    if (pos == 1) {
        // Only one node
        if (head->next == head) {
            delete head;
            return NULL;
        }

        Node* temp = head;

        // Find last node
        while (temp->next != head) {
            temp = temp->next;
        }

        Node* delNode = head;
        temp->next = head->next;
        head = head->next;

        delete delNode;
        return head;
    }

    // Case 3: Delete at other positions
    Node* temp = head;
    int count = 1;

    while (count < pos - 1 && temp->next != head) {
        temp = temp->next;
        count++;
    }

    // If position is invalid
    if (temp->next == head) {
        cout << "Position out of range\n";
        return head;
    }

    Node* delNode = temp->next;

    temp->next = delNode->next;

    delete delNode;

    return head;
}