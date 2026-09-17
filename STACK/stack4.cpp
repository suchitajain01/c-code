
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Stack {
    vector<char> item;
    int Top;

public:
    Stack(int s) {
        item.resize(s);
        Top = -1;
    }

    void Push(char x) {   //push function 
        if (Top == (int)item.size() - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
        Top++;
        item[Top] = x;
        }
    }

    char Pop() {   //pop function 
        if (IsEmpty()) {
            cout << "Stack UnderFlow" << endl;
            return '\0';
        }
        char x = item[Top];
        Top--;
        return x;
    }

    bool IsEmpty() {   //empty 
        return Top == -1;
    }

    char StackTop() {   //stack top
        if (IsEmpty()) {
            return '\0';
        }
        return item[Top];
    }
};


bool isOpeningBracket(char c) {
    return (c == '(' || c == '{' || c == '[');
}


bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool Prcd(char a, char b) {
    if (a == '^' || a == '/' || a == '*' || a == '%') {
        if (b == '^') {
            return false;
        } else {
            return true;
        }
    }
    if (a == '+' || a == '-') {
        if (b == '+' || b == '-') {
            return true;
        } else {
            return false;
        }
    }
    return false;
}

string infixToPostfix(string infix) {
    Stack s(infix.length());
    string postfix = "";

    for (size_t i = 0; i < infix.length(); i++) {
        char symbol = infix[i];

        // 1. Operands
        if ((symbol >= 'a' && symbol <= 'z') || 
            (symbol >= 'A' && symbol <= 'Z') || 
            (symbol >= '0' && symbol <= '9')) {
            postfix += symbol; //ALPHABET OR DIGIT PUSH IN POSTFIX
        }
        // 2. Any Opening Bracket: (, {, [
        else if (isOpeningBracket(symbol)) {
            s.Push(symbol);  //BRACKET PUSH IN SYMBOL
        }
        
        else if (symbol == ')' || symbol == '}' || symbol == ']') {
            while (!s.IsEmpty() && !isOpeningBracket(s.StackTop())) {  
                postfix += s.Pop();  //PRECDENCE TRUE,,  PUSH IN POSTFIX 
            }
            
            if (!s.IsEmpty() && isMatchingPair(s.StackTop(), symbol)) {
                s.Pop(); 
            }
        }
       
        else {
            while (!s.IsEmpty() && !isOpeningBracket(s.StackTop()) && Prcd(s.StackTop(), symbol)) {
                postfix += s.Pop();   //IF PRECEDENCE TRUE 
            }
            s.Push(symbol); //IF PRECEDENCE FALSE 
        }
    }

    // Pop remaining operators
    while (!s.IsEmpty()) {
        postfix += s.Pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter Infix Expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix Expression: " << postfix << endl;

    return 0;
}