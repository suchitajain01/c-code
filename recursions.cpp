#include<iostream>
using namespace std;

int fib(int n)//n will get value from actual agrument ie. a
{
    if(n<2)// if asked at 0 or 1 postion
    {
        return 1;
    }
    return fib(n-2) + fib(n-1); // to find factorial of nth term
}
// fib(5 ) = fib(4)+fib(3)
// fib(4) = fib(3) + fib(2)
//fib(3) = fib(2) + fib(1)
int factorial(int n)
{
    if(n<=1)
    {
    return 1;
    }
    return n* factorial(n-1);//if not 1 and 0
//only true for o and 1 
}

int main()
{
    int a;
    //factorial of a number
    // n! = n*(n-1)
    cout<<"enter a number:" <<endl;
    cin>>a;
    cout<<"the term in fibonacci sequence  at postion"<<a<<" is "<<fib(a)<<endl;
    return 0;

}

/*
Base case: When index reaches array size
Recursive case: Print current element, then recurse with next index

*/

#include <iostream>
#include <string>
using namespace std;

// 1. Factorial
int factorial(int n) {
    if (n <= 1) return 1;   //base case
    return n * factorial(n - 1);  //recursive case
}

// 2. Fibonacci Sequence
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 3. Sum of Natural Numbers
int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

// 4. Power Function
int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

// 5. Reverse a String
void reverseString(string& str, int start, int end) {
    if (start >= end) return;
    swap(str[start], str[end]);
    return reverseString(str, start + 1, end - 1);
}

// 6. Binary Search
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return binarySearch(arr, mid + 1 , right , target);
    return binarySearch(arr, mid + 1, right, target);
}

// 7. Tower of Hanoi
void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);
}

// 8. Print Array Elements
void printArray(int arr[], int index, int size) {
    if (index == size) return;
    cout << arr[index] << " ";
    printArray(arr, index + 1, size);
}

// 9. Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// 10. Count Digits in a Number
int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

/*int num1 = 4
int result = factorial(4)
cout<<"factorial of a number :result; 7


*/




int main() {
    // Example 1: Factorial
    cout << "1. Factorial of 5: " << factorial(5) << endl;
    
    // Example 2: Fibonacci
    cout << "2. Fibonacci of 7: " << fibonacci(7) << endl;
    
    // Example 3: Sum of Natural Numbers
    cout << "3. Sum of first 10 numbers: " << sum(10) << endl;
    
    // Example 4: Power
    cout << "4. 2^5 = " << power(2, 5) << endl;
    
    // Example 5: Reverse String
    string str = "Hello";
    reverseString(str, 0, str.length() - 1);
    cout << "5. Reversed string: " << str << endl;
    
    // Example 6: Binary Search
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    int result = binarySearch(arr, 0, size - 1, target);
    cout << "6. Binary Search for " << target << ": Index = " << result << endl;
    
    // Example 7: Tower of Hanoi
    cout << "7. Tower of Hanoi for 3 disks:" << endl;
    towerOfHanoi(3, 'A', 'C', 'B');
    
    // Example 8: Print Array
    cout << "8. Array elements: ";
    printArray(arr, 0, size);
    cout << endl;
    
    // Example 9: GCD
    cout << "9. GCD of 48 and 18: " << gcd(48, 18) << endl;
    
    // Example 10: Count Digits
    cout << "10. Number of digits in 12345: " << countDigits(12345) << endl;
    
    return 0;
}

