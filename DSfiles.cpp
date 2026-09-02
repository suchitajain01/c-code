#include <iostream>
using namespace std;

int main()
{

    /*
    int a, b, c;
    int n;
    cin >> a >> b >> n;

    switch (n)
    {
    case 1:
    {
        c = a + b;
        break;
    }

    case 2:
    {
        c = a - b;
        break;
    }
    case 3:
    {
        c = a * b;
        break;
    }

    case 4:
    {
        c = a / b;
        break;

    }
    default:
    cout<<"case not found";
}
cout<<c;



int n, t0 = 0, t1 = 1,t2;

cin>>n; //no of terms

for(int i = 1;i<=n;i++)
{
cout<< t0 << " ";
t2 = t0 + t1;

t0 = t1;
t1 = t2;
}





int num, sum = 0,  digit, temp;
    cout<<"enter the number:";
    cin>>num;
    temp = num;

    while(num>0)
    {
        digit = num%10; // to extract digits from the number (gives reminder)
        sum += digit*digit*digit;
        num = num/10; //(givess quotient )


    }

    if( sum == temp)
    {
    cout<<" yes , it is the angstrong number";
    }
    else
    {
    cout<<"no it is not the angstrong number";
    }






int n;
    cout << "Enter a number: ";
    cin >> n;

    while (n >= 10) {  // Repeat until single digit
        int sum = 0;
        int temp = n;

        while (temp > 0) {
            sum += temp % 10;  // Add last digit
            temp /= 10;        // Remove last digit
        }

        n = sum;  // Replace n with its digit-sum
    }

    cout << "Single-digit sum: " << n;






    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "Prime numbers between 1 and " << N << " are:\n";

    for (int i = 2; i <= N; i++) {
        bool isPrime = true;

        // Check divisibility
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << i << " ";
    }
}

//pyramid pattern
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < n - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;

    }
}


int n , temp;
cin>>n;
int arr[n];
cin>>arr[n];

//arrange the array in sorted form
for(int i = 1;i<n ;i++)
{
 for(int j = i+1 ; j<n; j++)
 {
    if(arr[j]>arr[j+1])

    {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
     }
 }

}
cout<< arr[n-1]<<" "  <<arr[n-2]<< " "<< arr[n-3];






    int N, num;
    cin >> N;

    int arr[N];

    cin >> arr[N];
    cin >> num;

    int start = 0, end = N - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        mid = (start + end) / 2;
    }
    if (arr[mid] == num)
    {
        cout << mid;
        return 0;
    }

    else if (arr[mid] < num)
    {
        start = mid + 1;
    }

    else
    {
        end = mid - 1;
    }

    
}



    int p,q;

    int a[p][q], b[q][p] , c[p][p];
    cin>>p>> q;

    for(int i = 0;i< p;i++)
    {
        for(int j = 0;j< q;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i = 0;i<q; i++)
    {
        for(int j = 0; j< p ; j++)
        {
            cin>>b[i][j];
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

     for(int i = 0;i <p ; i++)
     {
        for(int j= 0;j<q;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
     }

     return 0;


}

*/