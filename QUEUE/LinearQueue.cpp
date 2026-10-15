#include <iostream>
using namespace std;

class Queue {
    static const int SIZE = 5;
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1) {
            front = 0;
        }

        rear++;
        arr[rear] = value;

        cout << value << " inserted\n";
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << arr[front] << " deleted\n";

        if (front == rear) {
            // Last element deleted: reset the queue.
            front = rear = -1;
        } else {
            front++;
        }
    }

    void peek() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Front element: " << arr[front] << "\n";
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

   int main() 
   {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();     // Queue: 10 20 30
    q.peek();        // Front element: 10

    q.dequeue();     // 10 deleted
    q.display();     // Queue: 20 30

    q.enqueue(40);
    q.display();     // Queue: 20 30 40

    return 0;

}