#include <iostream>
using namespace std;

const int MAX = 100;

struct Element {
    char data;
    int priority;
};

class PriorityQueue {
private:
    Element arr[MAX];
    int n;

public:
    PriorityQueue() {
        n = 0;
    }

    void insert(char data, int priority) {
        if (n == MAX) {
            cout << "Queue Overflow\n";
            return;
        }

        int i = n - 1;

        // Shift elements with lower priority.
        // Equal-priority elements stay before the new element.
        while (i >= 0 && arr[i].priority > priority) {
            arr[i + 1] = arr[i];
            i--;
        }

        arr[i + 1].data = data;
        arr[i + 1].priority = priority;
        n++;
    }

    void deleteElement() {
        if (n == 0) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Deleted: " << arr[0].data << '\n';

        // Move remaining elements one position to the left.
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;
    }

    void peek() {
        if (n == 0) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Highest-priority element: "
             << arr[0].data
             << " | Priority: " << arr[0].priority << '\n';
    }

    void display() {
        if (n == 0) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Data\tPriority\n";

        for (int i = 0; i < n; i++) {
            cout << arr[i].data << '\t'
                 << arr[i].priority << '\n';
        }
    }
};

int main() {
    PriorityQueue pq;

    pq.insert('A', 3);
    pq.insert('B', 1);
    pq.insert('C', 4);
    pq.insert('D', 2);
    pq.insert('E', 1);

    cout << "Priority Queue:\n";
    pq.display();

    cout << '\n';
    pq.peek();

    cout << '\n';
    pq.deleteElement();

    cout << "\nAfter deletion:\n";
    pq.display();

    return 0;
}