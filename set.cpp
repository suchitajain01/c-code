#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;   // ordered set

    // insert
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); // duplicate ignored

    // erase
    s.erase(5);

    // size
    cout << "Size: " << s.size() << endl;

    // check existence
    if (s.count(20))
        cout << "20 exists\n";

    // print (always sorted)
    cout << "Ordered set: ";
    for (auto x : s)
        cout << x << " ";

    return 0;
}



#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us;

    // insert
    us.insert(10);
    us.insert(5);
    us.insert(20);
    us.insert(10); // duplicate ignored

    // erase
    us.erase(5);

    // size
    cout << "Size: " << us.size() << endl;

    // check existence
    if (us.find(20) != us.end())
        cout << "20 exists\n";

    // print (NOT sorted)
    cout << "Unordered set: ";
    for (auto x : us)
        cout << x << " ";

    return 0;
}

/*

//UNION OF TWO SETS (UNORDERED AND ORDERED)

unordered_set<int> newSet = set1; 
newSet.insert(set2.begin(), set2.end()); 

set<int> newSet = set1;
 newSet.insert(set2.begin(), set2.end());

 */



 //UNION OF TWO SETS FOR ORDERED

 /*
 
 set<int> A = {1, 2, 3, 4}; 
 set<int> B = {3, 4, 5, 6}; 
 set<int> set1;
set_union(A.begin(),A.end(),B.begin(),B.end(),
inserter(set1, set1.begin()));
 
 
 
 */