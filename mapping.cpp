#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    map<int, int> omap;
    unordered_map<int, int> umap;

    // 🔷 INSERT operation
    omap.insert({1, 10});
    omap.insert({2, 20});
    omap.insert({3, 30});

    umap.insert({1, 10});
    umap.insert({2, 20});
    umap.insert({3, 30});

    // 🔷 REMOVE operation
    omap.erase(2);
    umap.erase(2);

    // 🔷 SIZE
    cout << "Ordered Map Size: " << omap.size() << endl;
    cout << "Unordered Map Size: " << umap.size() << endl;

    // 🔷 FIND operation
    if (omap.find(3) != omap.end())
        cout << "3 found in Ordered Map" << endl;

    if (umap.find(3) != umap.end())
        cout << "3 found in Unordered Map" << endl;

    // 🔷 COUNT operation
    cout << "Count in Ordered Map (key 1): " << omap.count(1) << endl;
    cout << "Count in Unordered Map (key 1): " << u map.count(1) << endl;

    // 🔷 COMPARE maps (only works if same type & order)
    if (omap == map<int, int>(umap.begin(), umap.end()))
        cout << "Maps are equal (after conversion)" << endl;
    else
        cout << "Maps are NOT equal" << endl;

    // 🔷 Display Ordered Map
    cout << "\nOrdered Map:\n";
    for (auto it : omap)
        cout << it.first << " -> " << it.second << endl;

    // 🔷 Display Unordered Map
    cout << "\nUnordered Map:\n";
    for (auto it : umap)
        cout << it.first << " -> " << it.second << endl;

    return 0;
}

//creation of ordered and unordered maps
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> vec = {1,2,2,3,5,6,1,8};

    map<int, int> myMap;   // ascending order

    for (auto num : vec) {
        myMap[num] += 1;
    }

    cout << "Ascending order frequency:" << endl;
    for (auto it : myMap) {
        cout << "{" << it.first << "," << it.second << "} ";
    }

    return 0;
}



#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> vec = {1,2,2,3,5,6,1,8};

    map<int, int, greater<int>> myMap;   // descending order

    for (auto num : vec) {
        myMap[num] += 1;
    }

    cout << "Descending order frequency:" << endl;
    for (auto it : myMap) {
        cout << "{" << it.first << "," << it.second << "} ";
    }

    return 0;
}



#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> vec = {1,2,2,3,5,6,1,8};

    map<int, int, greater<int>> myMap;   // descending order

    for (auto num : vec) {
        myMap[num] += 1;
    }

    cout << "Descending order frequency:" << endl;
    for (auto it : myMap) {
        cout << "{" << it.first << "," << it.second << "} ";
    }

    return 0;
}

//SORTING BY KEYS

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// 1) Custom comparator function (sort by key ascending)
bool fun(pair<int, string> p1, pair<int, string> p2) {
    return p1.first < p2.first; //ascending order
     return p1.first > p2.first; //descending order 
}

int main() {

    // 2) Unordered map
    unordered_map<int, string> mp = {
        {10, "AB"},
        {30, "CD"},
        {8, "DE"}
    };

    // 3) Convert map to vector of pairs
    vector<pair<int, string>> vec(mp.begin(), mp.end());

    // 4) Sort using custom function (by keys ascending)
    sort(vec.begin(), vec.end(), fun);

    // 5) Print sorted result
    cout << "Sorted by keys (ascending):" << endl;
    for (auto &p : vec) {
        cout << "{" << p.first << "," << p.second << "} ";
    }

    return 0;
}


