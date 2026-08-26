#include<iostream>
using namespace std;

class student

{
    //data members
    private:
    string name;
    int id;
     
    public:
    //constructor
    student(string fullName, int address )
{
    name = fullName;
    id = address;
}

//getters method
string getName()
{
       return name;
}

int getId()
{
    return id;
}

//setters method
void setName(string fullName )
{
name = fullName;  

}

void setId(int address)
{
    id = address;

}
//instance method
void displayDetails()
{
    cout<<"name of the student:"<<name<<endl;
    cout<<"roll number of the student"<<id<<endl;
}
};


int main()
{
student peter("suchita",20);
peter.displayDetails();
return 0;
}

/*virtual → enables runtime polymorphism

= 0 → makes the function pure virtual

No function body in base class

*/





                       //ABSTRACTION

//abstract class
class tech
{
    public:
    virtual void claude()=0;  //pure virtual function 

    virtual void cursor()
    {
        cout<<"this ai tool debugs code";
    }


};
//derived class 
class marketing : public tech //inherited publically
{
   public:

//implement abstract methods

    void claude() override
    {
        cout<<"edits code";
    } 
};


//another derived class

class seo: public tech
{
public:

void claude() override
{
    cout<<"paste ur repository";
}


};


int main()
{
    //create object using pointer to abstract class
    tech* m1 = new marketing();
    tech* m2 = new seo();

     //m1->claude();
    (*m1).claude();
    (*m1).cursor();

    (*m2).claude();
    (*m2).cursor();

    delete m1;
    delete m2;
    //we delete m1 and m2 to free the memory that was allocated using new.


return 0;
}





                                    //ENCAPSULATION



#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;   // data hidden from outside
//data members 
public:
    // Setter method
    void setBalance(int b) { //memeber functions 
        if (b >= 0)
            balance = b;
    }

    // Getter method
    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;

    // acc.balance = 5000;   ❌ Not allowed (private)

    acc.setBalance(5000);    // ✔ Controlled access
    cout << "Balance: " << acc.getBalance() << endl;

    return 0;
}
/* 

balance is private → cannot be accessed directly
✔ Access is only through public methods
✔ Data is protected and validated

*/


                                       //INHERITANCE

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // Inherited function
    d.bark();  // Dog's own function

    return 0;
}

                        //FUNCTION OVERLOADING - compile time polymorphism
#include <iostream>
using namespace std;

class Math {
public:
    // Function with two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function with three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function with double parameters
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;

    cout << m.add(10, 20) << endl;        // calls add(int, int)
    cout << m.add(10, 20, 30) << endl;    // calls add(int, int, int)
    cout << m.add(5.5, 2.5) << endl;      // calls add(double, double)

    return 0;
}

                   //FUNCTION OVERRIDING - runtime polymorphism(inheritance, virtual function )

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a; //base class pointer
    Dog d;

    a = &d;
    a->sound();   // Calls Dog's sound()

    return 0;
}














