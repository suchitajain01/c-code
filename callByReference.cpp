#include <iostream>
#include <string>
using namespace std;

// Example 1: Basic Integer Parameter
void increment(int &x) {
    x = x + 1;
    cout << "Inside increment: " << x << endl;
}

// Example 2: Double/Float Calculation
void addBonus(double &salary) {
    salary = salary + 5000;
    cout << "Inside addBonus: " << salary << endl;
}

// Example 3: Character Modification
void changeGrade(char &grade) {
    grade = 'A';
    cout << "Inside changeGrade: " << grade << endl;
}

// Example 4: Boolean Toggle
void toggleFlag(bool &flag) {
    flag = !flag;
    cout << "Inside toggleFlag: " << flag << endl;
}

// Example 5: Successful Swap
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap: " << a << " " << b << endl;
}

// Example 6: String Object
void modifyString(string &str) {
    str = "Modified";
    cout << "Inside modifyString: " << str << endl;
}

// Example 7: Struct/Class Object
struct Point {
    int x, y;
};

void movePoint(Point &p) {
    p.x = 100;
    p.y = 200;
    cout << "Inside movePoint: " << p.x << " " << p.y << endl;
}

// Example 8: Long Integer
void multiply(long &num) {
    num = num * 10;
    cout << "Inside multiply: " << num << endl;
}

// Example 9: Multiple Return Values
void getDimensions(int &length, int &width, int &height) {
    length = 10;
    width = 20;
    height = 30;
    cout << "Inside getDimensions: " << length << " " << width << " " << height << endl;
}

// Example 10: Array Modification Through Reference
void updateArray(int &first, int &last) {
    first = 100;
    last = 200;
    cout << "Inside updateArray: " << first << " " << last << endl;
}

int main() {
    cout << "===== CALL BY REFERENCE EXAMPLES =====" << endl << endl;
    
    // Example 1
    cout << "Example 1: Basic Integer" << endl;
    int num = 5;
    cout << "Before increment: " << num << endl;
    increment(num);
    cout << "After increment: " << num << endl << endl;
    
    // Example 2
    cout << "Example 2: Double/Float" << endl;
    double mySalary = 50000;
    cout << "Before addBonus: " << mySalary << endl;
    addBonus(mySalary);
    cout << "After addBonus: " << mySalary << endl << endl;
    
    // Example 3
    cout << "Example 3: Character" << endl;
    char studentGrade = 'B';
    cout << "Before changeGrade: " << studentGrade << endl;
    changeGrade(studentGrade);
    cout << "After changeGrade: " << studentGrade << endl << endl;
    
    // Example 4
    cout << "Example 4: Boolean" << endl;
    bool isActive = true;
    cout << "Before toggleFlag: " << isActive << endl;
    toggleFlag(isActive);
    cout << "After toggleFlag: " << isActive << endl << endl;
    
    // Example 5
    cout << "Example 5: Successful Swap" << endl;
    int x = 10, y = 20;
    cout << "Before swap: " << x << " " << y << endl;
    swap(x, y);
    cout << "After swap: " << x << " " << y << endl << endl;
    
    // Example 6
    cout << "Example 6: String Object" << endl;
    string text = "Original";
    cout << "Before modifyString: " << text << endl;
    modifyString(text);
    cout << "After modifyString: " << text << endl << endl;
    
    // Example 7
    cout << "Example 7: Struct/Class Object" << endl;
    Point pt = {10, 20};
    cout << "Before movePoint: " << pt.x << " " << pt.y << endl;
    movePoint(pt);
    cout << "After movePoint: " << pt.x << " " << pt.y << endl << endl;
    
    // Example 8
    cout << "Example 8: Long Integer" << endl;
    long value = 123456;
    cout << "Before multiply: " << value << endl;
    multiply(value);
    cout << "After multiply: " << value << endl << endl;
    
    // Example 9
    cout << "Example 9: Multiple Return Values" << endl;
    int l, w, h;
    cout << "Before getDimensions: (uninitialized)" << endl;
    getDimensions(l, w, h);
    cout << "After getDimensions: " << l << " " << w << " " << h << endl << endl;
    
    // Example 10
    cout << "Example 10: Array Modification" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Before updateArray: " << arr[0] << " " << arr[4] << endl;
    updateArray(arr[0], arr[4]);
    cout << "After updateArray: " << arr[0] << " " << arr[4] << endl << endl;
    
    return 0;
}
/*

**Output:**
```
===== CALL BY REFERENCE EXAMPLES =====

Example 1: Basic Integer
Before increment: 5
Inside increment: 6
After increment: 6

Example 2: Double/Float
Before addBonus: 50000
Inside addBonus: 55000
After addBonus: 55000

Example 3: Character
Before changeGrade: B
Inside changeGrade: A
After changeGrade: A

Example 4: Boolean
Before toggleFlag: 1
Inside toggleFlag: 0
After toggleFlag: 0

Example 5: Successful Swap
Before swap: 10 20
Inside swap: 20 10
After swap: 20 10

Example 6: String Object
Before modifyString: Original
Inside modifyString: Modified
After modifyString: Modified

Example 7: Struct/Class Object
Before movePoint: 10 20
Inside movePoint: 100 200
After movePoint: 100 200

Example 8: Long Integer
Before multiply: 123456
Inside multiply: 1234560
After multiply: 1234560

Example 9: Multiple Return Values
Before getDimensions: (uninitialized)
Inside getDimensions: 10 20 30
After getDimensions: 10 20 30

Example 10: Array Modification
Before updateArray: 1 5
Inside updateArray: 100 200
After updateArray: 100 200
*/