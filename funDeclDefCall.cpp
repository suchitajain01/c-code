// ============================================================
// 10 C++ PROGRAMS WITH FUNCTION DECLARATION, DEFINITION, AND CALLING
// ============================================================

/*
MAIN FUNCTION
- calling function
-values initialise that has to be passed in calling function 
- print 
*/

/*
FUNCTION DEFINATION
procedure for calculating the method

*/



#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// ============================================================
// PROGRAM 1: Calculate Sum of Two Numbers
// ============================================================
// Function Declaration
int calculateSum(int a, int b);

void program1() {
    cout << "\n=== PROGRAM 1: Calculate Sum ===" << endl;
    int num1 = 10, num2 = 20;
    // Function Calling
    int result = calculateSum(num1, num2);
    cout << "Sum of " << num1 << " and " << num2 << " = " << result << endl;
}

// Function Definition
int calculateSum(int a, int b) {
    return a + b;
}

// ============================================================
// PROGRAM 2: Check Even or Odd
// ============================================================
// Function Declaration
bool isEven(int number);

void program2() {
    cout << "\n=== PROGRAM 2: Check Even or Odd ===" << endl;
    int num = 15;
    // Function Calling
    if (isEven(num)) {
        cout << num << " is Even" << endl;
    } else {
        cout << num << " is Odd" << endl;
    }
}

// Function Definition
bool isEven(int number) {
    return (number % 2 == 0);
}

// ============================================================
// PROGRAM 3: Find Maximum of Three Numbers
// ============================================================
// Function Declaration
int findMax(int x, int y, int z);

void program3() {
    cout << "\n=== PROGRAM 3: Find Maximum ===" << endl;
    int a = 45, b = 78, c = 23;

    // Function Calling
    int maximum = findMax(a, b, c);
    cout << "Maximum of " << a << ", " << b << ", " << c << " = " << maximum << endl;
}

// Function Definition
int findMax(int x, int y, int z) {
    int max = x;
    if (y > max) max = y;
    if (z > max) max = z;
    return max;
}

// ============================================================
// PROGRAM 4: Calculate Factorial
// ============================================================
// Function Declaration
long long factorial(int n);

void program4() {
    cout << "\n=== PROGRAM 4: Calculate Factorial ===" << endl;
    int num = 6;
    // Function Calling
    long long fact = factorial(num);
    cout << "Factorial of " << num << " = " << fact << endl;
}

// Function Definition
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// ============================================================
// PROGRAM 5: Check Prime Number
// ============================================================
// Function Declaration
bool isPrime(int num);

void program5() {
    cout << "\n=== PROGRAM 5: Check Prime Number ===" << endl;
    int number = 29;
    // Function Calling
    if (isPrime(number)) {
        cout << number << " is a Prime number" << endl;
    } else {
        cout << number << " is not a Prime number" << endl;
    }
}

// Function Definition
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;  //EVEN NUMBERS 
    
    for (int i = 3; i <= sqrt(num); i += 2)
     {   //ODD NUMBERS 
        if (num % i == 0) return false;
    }
    return true;
}

// ============================================================
// PROGRAM 6: Calculate Area of Circle
// ============================================================
// Function Declaration
double calculateCircleArea(double radius);

void program6() {
    cout << "\n=== PROGRAM 6: Calculate Circle Area ===" << endl;
    double r = 7.5;
    // Function Calling
    double area = calculateCircleArea(r);
    cout << "Area of circle with radius " << r << " = " << area << endl;
}

// Function Definition
double calculateCircleArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

// ============================================================
// PROGRAM 7: Reverse a String
// ============================================================
// Function Declaration
string reverseString(string str);

void program7() {
    cout << "\n=== PROGRAM 7: Reverse String ===" << endl;
    string text = "Hello World";
    // Function Calling
    string reversed = reverseString(text);
    cout << "Original: " << text << endl;
    cout << "Reversed: " << reversed << endl;
}

// Function Definition
string reverseString(string str) {
    string result = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        result += str[i];
    }
    return result;
}

// ============================================================
// PROGRAM 8: Calculate Power
// ============================================================
// Function Declaration
double power(double base, int exponent);

void program8() {
    cout << "\n=== PROGRAM 8: Calculate Power ===" << endl;
    double base = 2.5;
    int exp = 3;
    // Function Calling
    double result = power(base, exp);
    cout << base << " raised to power " << exp << " = " << result << endl;
}

// Function Definition
double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// ============================================================
// PROGRAM 9: Swap Two Numbers
// ============================================================
// Function Declaration
void swapNumbers(int &a, int &b);

void program9() {
    cout << "\n=== PROGRAM 9: Swap Two Numbers ===" << endl;
    int x = 100, y = 200;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    // Function Calling
    swapNumbers(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
}

// Function Definition
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// ============================================================
// PROGRAM 10: Count Vowels in String
// ============================================================
// Function Declaration
int countVowels(string text);

void program10() {
    cout << "\n=== PROGRAM 10: Count Vowels ===" << endl;
    string sentence = "Programming is fun";
    // Function Calling
    int vowelCount = countVowels(sentence);
    cout << "String: " << sentence << endl;
    cout << "Number of vowels: " << vowelCount << endl;
}

// Function Definition
int countVowels(string text) {
    int count = 0;
    for (char ch : text) {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || 
            lower == 'o' || lower == 'u') {
            count++;
        }
    }
    return count;
}

// ============================================================
// MAIN FUNCTION - Runs all programs
// ============================================================
int main() {
    cout << "===============================================" << endl;
    cout << "C++ FUNCTION EXAMPLES" << endl;
    cout << "Each program demonstrates:" << endl;
    cout << "1. Function Declaration (prototype)" << endl;
    cout << "2. Function Definition (implementation)" << endl;
    cout << "3. Function Calling (invocation)" << endl;
    cout << "===============================================" << endl;
    
    program1();  // Sum of two numbers
    program2();  // Even or Odd
    program3();  // Maximum of three numbers
    program4();  // Factorial
    program5();  // Prime number check
    program6();  // Circle area
    program7();  // Reverse string
    program8();  // Power calculation
    program9();  // Swap numbers
    program10(); // Count vowels
    
    cout << "\n===============================================" << endl;
    cout << "All programs executed successfully!" << endl;
    cout << "===============================================" << endl;
    
    return 0;
}