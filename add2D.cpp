#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r1, r2,c1,c2;
    cout << "Enter number of rows and columns: ";
    cin >> r1 >> r2 >> c1>> c2;

    // Memory allocation using vectors
    vector<vector<int>> A(r1, vector<int>(c1));
    vector<vector<int>> B(r2, vector<int>(c2));
    vector<vector<int>> C(r1, vector<int>(c2,0));

    cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter elements of matrix B:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    // Matrix addition
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            C[i][j] = A[i][j] + B[i][j];

    cout << "Resultant matrix (A + B):\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}


