#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

// Create a new node
node *GetNode(int x)
{
    node *PQ = new node;
    PQ->data = x;
    PQ->next = NULL;

    return PQ;
}

// Dequeue from front
node *DeQueue(node *PQ)
{
    if (PQ == NULL)
    {
        cout << "Queue Underflows" << endl;
        exit(1);
    }

    node *p;
    p = PQ;

    int x = p->data;
    cout << "Dequeued element: " << x << endl;

    PQ = PQ->next;

    delete p;

    return PQ;
}

// Enqueue at rear
node *EnQueue(node *PQ, int x)
{
    node *curr, *prev;

    curr = PQ;
    prev = NULL;

    node *R;
    R = GetNode(x);

    // If queue is empty
    if (PQ == NULL)
    {
        return R;
    }

    // Move to the last node
    while (curr != NULL)
    {
        prev = curr;
        curr = curr->next;
    }

    // Insert new node at the end
    prev->next = R;

    return PQ;
}

int main()
{
    node *PQ;
    PQ = NULL;

    PQ = EnQueue(PQ, 10);
    PQ = EnQueue(PQ, 20);
    PQ = EnQueue(PQ, 30);
    PQ = EnQueue(PQ, 40);
    PQ = EnQueue(PQ, 50);

    // Display queue
    node *p = PQ;

    while (p != NULL)
    {
        cout << p->data << ",";
        p = p->next;
    }

    cout << endl << endl;

    // Dequeue
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);

    // One more dequeue -> underflow
    PQ = DeQueue(PQ);

    return 0;
}