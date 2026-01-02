#include <iostream>
using namespace std;
// PATTERN TO PRINT EQUILATERAL TRIANGLE
/*
int main()
{
    int i,j,k,n;
    cout<<"enter the value of n:";
    cin>>n;

    for(i = 1 ; i<=n ; i++) // no of rows
    {
        for(j = i; j < n ; j++) // to print spaces
        {
            cout<< " ";
        }

        for(k = 1 ; k <= (2*i-1) ; k++) // to print characters
        {
            cout<<"*";
        }

    cout<<endl;
    }

    return 0;


}
*/







/*
// TO PRINT inverted triangle pattern
int main()
{
    // upper half
    int i, j, k, n;
    cout << "enter the value of n:";
    cin >> n;

    for (i = 1; i<=n; i++) // to print rows
    {
        for (j = 1; j <= i; j++) // to print stars
        {
            cout << "*";
        }

        cout << endl;
    }

    // LOWER HALF(inverted)
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }


        cout << endl;
    }
}

 */





/*

    int main()
    {
        int n,i,j;
        cout<<"enter the number of rows:"; 
        cin>>n; // number of stars in first row

        for(i = 1 ; i<=5 ; i++) // loop for rows
        {
            char ch = 'A';
          for(j = 1;j<=i;j++)
          {
            cout<<ch<<" ";
            ch++;
          }

    
        cout<<endl;
        }

    }
*/
 




/*
//PYRAMID ALPHABTET PATTERN

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) 
    {
        // spaces
        for(int s = 1; s <= n - i; s++)
            cout << " ";

        // alphabets
        char ch = 'A';
        for(int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
*/






/*
// DIAMOND PATTERN 
int main()
{
    int i,j,k;
    int n = 5;
    // upper pyramid
    for(int i = 1; i<=n ;i++)
    {
        char ch = 'A';
       for ( j = 1; j< n -i ; j++)
       cout<<" ";  // to print space


       for(k = 1; k<=i ; k++)
       {
        cout<<ch<<" ";
        ch++;
       }
       cout<<endl;
    }

    // lower pyramid

    for( i = n-1; i >=1 ; i--)
    {
        char ch = 'A';
        for(j = 1;j < n -i ; j++)
        {
            cout<< " ";
        }
        for(k = 1 ; k<=i ; k++)
        {
        cout<<ch<<" ";
        ch++;
        }
        cout<<endl;
    }

    return 0;
}

*/




//PYrmaid alphabet pattern
/*
int main() {
    int n = 5;  // number of rows

    for (int i = 1; i <= n; i++) 
    {

        // printing spaces
        for (int s = 1; s <= n - i; s++) 
        {
            cout << "  ";
        }

        // printing increasing alphabets
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
      
     
        //printing decreasing characters
        ch = -2; //from E to C 
        for(j = 1;j<i -1; j++) // loop runs 3 times in 1st oteration
                               
        {
            cout<<ch<<" ";   // 
            ch--;                  // C becomes B in 4 row
        }
*/