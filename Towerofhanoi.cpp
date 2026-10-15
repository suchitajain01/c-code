#include <iostream>
using namespace std;

void tower(int n, char S, char A, char D) {
    if (n == 1) {
        cout << S << " -> " << D << endl;
        return;
    }

    tower(n - 1, S, D, A);
    cout << S << " -> " << D << endl;
    tower(n - 1, A, S, D);
}

int main() {
    tower(3, 'A', 'B', 'C');
    return 0;
}