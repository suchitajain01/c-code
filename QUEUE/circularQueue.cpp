#include <iostream>
using namespace std;

class CircularQueue {
    static const int SIZE = 5;
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = rear = -1;
    }

    void enqueue(int value) {
        if ((rear + 1) % SIZE == front) {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % SIZE;
        }

        arr[rear] = value;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << arr[front] << " deleted\n";

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
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
        int i = front;

        while (i != rear) {
            cout << arr[i] << " ";
            i = (i + 1) % SIZE;
        }

        cout << arr[rear] << "\n";
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();    // 10 20 30 40 50

    q.dequeue();    // Deletes 10
    q.dequeue();    // Deletes 20

    q.enqueue(60);  // Reuses index 0
    q.enqueue(70);  // Reuses index 1

    q.display();    // 30 40 50 60 70
    q.peek();       // Front element: 30

    return 0;
}