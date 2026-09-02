//DIVION MODULO METHOD
#include <iostream>
using namespace std;

int hashFunction(int key, int tableSize)
{
    return key % tableSize;
}

int main()
{
    int key, tableSize;

    cout << "Enter key: ";
    cin >> key;

    cout << "Enter hash table size: ";
    cin >> tableSize;

    int index = hashFunction(key, tableSize);

    cout << "Hash Index = " << index << endl;

    return 0;
}

// DIGIT EXTRACTION

#include <iostream>
using namespace std;

// Hash function using digit extraction method
int digitExtractionHash(int key)
{
    int lastTwoDigits = key % 100;   // Extract last 2 digits
    return lastTwoDigits;
}

int main()
{
    int key;

    cout << "Enter key: ";
    cin >> key;

    int hashIndex = digitExtractionHash(key);

    cout << "Hash Index = " << hashIndex << endl;

    return 0;
}

//MID SQUARE 

#include <iostream>
#include <string>
using namespace std;

// Hash function using Mid-Square Method

int midSquareHash(int key)
{
    long long square = 1LL * key * key;

    string sq = to_string(square);

    int len = sq.length();

    // Extract middle 2 digits
    int mid = len / 2;

    string middleDigits;

    if (len >= 2)
        middleDigits = sq.substr(mid - 1, 2);
    else
        middleDigits = sq;

    return stoi(middleDigits);
}

int main()
{

    int key;

    cout << "Enter key: ";
    cin >> key;

    int hashIndex = midSquareHash(key);

    cout << "Hash Index = " << hashIndex << endl;

    return 0;
}


//FOLDING 

#include <iostream>
using namespace std;

// Hash function using Folding Method
int foldingHash(int key)
{
    int sum = 0;

    // Split number into parts of 2 digits and add them
    while (key > 0)
    {
        sum += key % 100;   // Extract last 2 digits
        key /= 100;         // Remove last 2 digits
    }

    return sum;
}

int main()
{
    int key;

    cout << "Enter key: ";
    cin >> key;

    int hashIndex = foldingHash(key);

    cout << "Hash Index = " << hashIndex << endl;

    return 0;
}


#include <iostream>
using namespace std;

#define SIZE 10

class HashTable
{
    int table[SIZE];

public:
    HashTable()
    {
        for (int i = 0; i < SIZE; i++)
            table[i] = -1;
    }

    // Hash Function
    int hashFunction(int key)
    {
        return key % SIZE;
    }

    // Insertion
    void insert(int key)
    {
        int index = hashFunction(key);

        // Linear Probing for collision handling
        
        while (table[index] != -1)  //if collision occurs 
        {
            index = (index + 1) % SIZE;
        }

        table[index] = key;
        cout << key << " inserted at index " << index << endl;
    }

    // Search
    void search(int key)
    {
        int index = hashFunction(key);
        int start = index;

        while (table[index] != -1)
        {
            if (table[index] == key)
            {
                cout << key << " found at index " << index << endl;
                return;
            }

            index = (index + 1) % SIZE;

            if (index == start)
                break;
        }

        cout << key << " not found" << endl;
    }

    // Deletion
    void remove(int key)
    {
        int index = hashFunction(key);
        int start = index;

        while (table[index] != -1)
        {
            if (table[index] == key)
            {
                table[index] = -1;
                cout << key << " deleted" << endl;
                return;
            }

            index = (index + 1) % SIZE;

            if (index == start)
                break;
        }

        cout << key << " not found" << endl;
    }

    // Display Hash Table
    void display()
    {
        cout << "\nHash Table:\n";

        for (int i = 0; i < SIZE; i++)
        {
            cout << i << " --> ";

            if (table[i] == -1)
                cout << "Empty";
            else
                cout << table[i];

            cout << endl;
        }
    }
};

int main()
{
    HashTable h;

    h.insert(15);
    h.insert(25);
    h.insert(35);
    h.insert(20);

    h.display();

    h.search(25);

    h.remove(25);

    h.search(25);

    h.display();

    return 0;
}


//C++ program to implement a Hash Table using Linear Probing for collision resolution: 

#include <iostream> 

using namespace std; 

 

int main() { 
    int size, n; 
    cout << "Enter size of hash table: "; 

    cin >> size; 

 

    int hashTable[size]; 

 

    // Initialize hash table with -1 

    for (int i = 0; i < size; i++) { 

        hashTable[i] = -1; 

    } 

 

    cout << "Enter number of keys: "; 

    cin >> n; 

 

    int key; 

 

    cout << "Enter keys:\n"; 

 

    for (int i = 0; i < n; i++) { 

 

        cin >> key; 

 

        // Hash Function 

        int index = key % size; 

 

        // Linear Probing 

        while (hashTable[index] != -1) { 

            index = (index + 1) % size; 

        } 

 

        hashTable[index] = key; 

    } 

 

    // Display Hash Table 

    cout << "\nHash Table:\n"; 

    for (int i = 0; i < size; i++) { 

 

        cout << i << " --> "; 

 

        if (hashTable[i] == -1) 

            cout << "Empty"; 

        else 

            cout << hashTable[i]; 

 

        cout << endl; 

    } 

 

    return 0; 

} 

 



//C++ Program for Search Operation in Hash Table using Open Addressing (Linear Probing): 

#include <iostream> 

using namespace std; 

 

#define SIZE 10 
int hashTable[SIZE]; 

// Function to initialize hash table 

void initialize() { 

    for (int i = 0; i < SIZE; i++) { 

        hashTable[i] = -1; 

    } 

} 

// Hash Function 

int hashFunction(int key) { 

    return key % SIZE; 

} 

// Insert Function using Linear Probing 

void insert(int key) { 

    int index = hashFunction(key); 
    while (hashTable[index] != -1) { 

        index = (index + 1) % SIZE; 

    } 

    hashTable[index] = key; 

} 

// Search Function 

void search(int key) { 

    int index = hashFunction(key); 

    int start = index; 

 

    while (hashTable[index] != -1) 
    { 
        if (hashTable[index] == key) 
        { 

            cout << "Element " << key 

                 << " found at index " 

                 << index << endl; 

            return; 

        } 
        index = (index + 1) % SIZE; 
        // Stop if full cycle completed 
        if (index == start) 

            break; 

    } 

 

    cout << "Element not found" << endl; 

} 

 

// Display Function 

void display() { 

    cout << "\nHash Table:\n"; 

 

    for (int i = 0; i < SIZE; i++) { 

        cout << i << " --> "; 

 

        if (hashTable[i] == -1) 

            cout << "Empty"; 

        else 

            cout << hashTable[i]; 

 

        cout << endl; 

    } 

} 

 

int main() { 

 

 

    // Insert elements 

    insert(23); 

    insert(43); 

    insert(13); 

    insert(27); 

 

    // Display hash table 

    display(); 

 

    // Search elements 

    search(43); 

    search(50); 

 

    return 0; 

}


////C++ program to implement a Hash Table using Quadratic Probing for collision resolution: 

#include <iostream>
using namespace std;

int main()
{
    int table[10], n, key;

    for(int i = 0; i < 10; i++)
        table[i] = -1; //all slots empty 

    cout << "Enter number of elements: ";
    cin >> n; //no of keys

    cout << "Enter elements: ";
    for(int j = 0; j < n; j++)
    {
        cin >> key;


        int index = key % 10;
        int i = 0;

        while(table[index]!= -1)
        {
              index =(index + i*i)% 10;
            i++;
        }

        table[index] = key;
        
    }

    cout << "\nHash Table:\n";
    for(int i = 0; i < 10; i++)
        cout << i << " -> " << table[i] << endl;

    return 0;
}




//C++ Program for Search Operation in Hash Table using Open Addressing (Quadratic Probing): 


#include <iostream>
using namespace std;

#define SIZE 10

int hashTable[SIZE];

int hashFunction(int key)
{
    return key % SIZE;
}

void insert(int key)
{
    int index = hashFunction(key);
    int i = 0;

    while (hashTable[(index + i * i) % SIZE] != -1)
        i++;

    hashTable[(index + i * i) % SIZE] = key;
}

void search(int key)
{
    int index = hashFunction(key);
    int i = 0;

    while (hashTable[(index + i * i) % SIZE] != -1)
    {
        if (hashTable[(index + i * i) % SIZE] == key)
        {
            cout << key << " found." << endl;
            return;
        }
        i++;
    }

    cout << key << " not found." << endl;
}

int main()
{
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        insert(key);
    }

    cout << "Enter element to search: ";
    cin >> key;

    search(key);

    return 0;
}


//////C++ program to implement a Hash Table using double hashing for collision resolution: 


#include <iostream>
using namespace std;

#define SIZE 10

int hashTable[SIZE];

int hash1(int key)
{
    return key % SIZE;
}

int hash2(int key)
{
    return 7 - (key % 7);
}

void insert(int key)
{
    int index = hash1(key);
    int step = hash2(key);
    int i = 0;

    while (hashTable[(index + i * step) % SIZE] != -1)
        i++;

    hashTable[(index + i * step) % SIZE] = key;
}

void display()
{
    cout << "\nHash Table:\n";
    for (int i = 0; i < SIZE; i++)
        cout << i << " -> " << hashTable[i] << endl;
}

int main()
{
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        insert(key);
    }

    display();

    return 0;
}




//C++ Program for Search Operation in Hash Table using Open Addressing 
//(DOUBLE HASHING): 





#include <iostream>
using namespace std;

#define SIZE 10

int hashTable[SIZE];

int hash1(int key)
{
    return key % SIZE;
}

int hash2(int key)
{
    return 7 - (key % 7);
}

void insert(int key)
{
    int index = hash1(key);
    int step = hash2(key);
    int i = 0;

    while (hashTable[(index + i * step) % SIZE] != -1)
        i++;

    hashTable[(index + i * step) % SIZE] = key;
}

void search(int key)
{
    int index = hash1(key);
    int step = hash2(key);
    int i = 0;

    int pos = [(index + i* step) % SIZE];



    while (hashTable[index] != -1)
    {

        if (hashTable[pos] == key)
        {
            cout << key << " found at index " << pos << endl;
            return;
        }

        i++;

        if (i == SIZE) break;
    }

    cout << key << " not found" << endl;
}

void display()
{
    cout << "\nHash Table:\n";
    for (int i = 0; i < SIZE; i++)
        cout << i << " -> " << hashTable[i] << endl;
}

int main()
{
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        insert(key);
    }

    cout << "Enter element to search: ";
    cin >> key;

    search(key);

    display();

    return 0;
}

//C++ Program to create linked list using separate chaining 

#include <iostream>
using namespace std;

#define SIZE 10

// Node structure for linked list
struct Node
{
    int data;
    Node* next;
};

// Hash table (array of pointers)
Node* table[SIZE];

int hashFunction(int key)
{
    return key % SIZE;
}

void insert(int key)
{
    int index = hashFunction(key);

    Node* newNode = new Node();
    newNode->data = key;
    newNode->next = table[index];

    table[index] = newNode;

    cout << key << " inserted at index " << index << endl;
}

void display()
{
    cout << "\nHash Table (Separate Chaining):\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << i << " -> ";
        
        Node* temp = table[i];

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
}

int main()
{
    // Initialize table
    for (int i = 0; i < SIZE; i++)
        table[i] = NULL;

    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        insert(key);
    }

    display();

    return 0;
}