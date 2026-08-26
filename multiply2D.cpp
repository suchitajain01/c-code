#include<iostream>
using namespace std;

//multiplication of 2D array.
int main()
{
    int p = 3;
    int q = 2;

    int a[3][2], b[2][3] , c[3][3];
    cout<<"enter elements of 1st matrix";
    for(int i = 0;i< p;i++)   //(3 X 2)matrix
    {
        for(int j = 0;j< q;j++)
        {
            cin>>a[i][j];   //1st matrix
        }
    }
    
    for(int i = 0;i< q; i++)  //(2X3)matrix
    {
        for(int j = 0; j< p ; j++)
        {
            cin>>b[i][j];            //second matrix
        }
    }
for(int i = 0;i< p; i++)
{
    for(int j = 0 ;j<p;j++)
    {
        c[i][j] = 0;
    }
}

    for(int i = 0; i < p; i++) 
    {
        for(int j = 0; j < p; j++) 
        {
            for(int k = 0; k < q; k++) // for coloums
             {
                c[i][j] += a[i][k] * b[k][j];
             }

        }
    }

     cout<<"matrix multiplication:";
     for(int i = 0;i <p ; i++)
     {
        for(int j= 0;j<p;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
     }

     return 0;

    }





#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    
    // Input dimensions of first matrix
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    
    // Input dimensions of second matrix
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    
    // Check if multiplication is possible
    if(c1 != r2)
    {
        cout << "Matrix multiplication not possible!" << endl;
        cout << "Columns of first matrix must equal rows of second matrix." << endl;
        return 0;
    }
    
    // Declare matrices using vectors
    vector<vector<int>> a(r1, vector<int>(c1));
    vector<vector<int>> b(r2, vector<int>(c2));
    vector<vector<int>> c(r1, vector<int>(c2, 0));

    /*Creates a 2D vector with r1 rows
Each row is a vector of c1 integers
Automatically initializes all elements to 0*/
    
    // Input first matrix
    cout << "Enter elements of first matrix (" << r1 << "x" << c1 << "):" << endl;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    
    // Input second matrix
    cout << "Enter elements of second matrix (" << r2 << "x" << c2 << "):" << endl;
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    
    // Perform matrix multiplication
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            for(int k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Display result
    cout << "\nResultant matrix (" << r1 << "x" << c2 << "):" << endl;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
