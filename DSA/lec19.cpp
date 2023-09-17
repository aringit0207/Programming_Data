// STL -> Standard Template Library

// ARRAYS -> Static Array
/*
#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 4> arr = {1, 2, 3, 4};
    int size = arr.size();

    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    cout << "Element at 3rd index : " << arr.at(3) << endl;
    cout << "Empty or not : " << arr.empty() << endl;
    cout << "First element : " << arr.front() << endl;
    cout << "Back element : " << arr.back() << endl;


    return 0;
}

VECTORS -> Dynamic array

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    // vector<int> v = {1,2,3};
    // vector<int> v(5, 1); // vector of size 5 & all elements are initialized to 1
    // vector<int> copy(v); // copying a vector

    vector<int> v;
    int num = 1;
    for(int i = 0; i < 3; i++) {
        v.push_back(num);
        num++;
    }

    cout << "Size of vector : " << v.size() << endl;
    cout << "First element : " << v.front() << endl;
    cout << "Last element : " << v.back() << endl;

    cout << "Before pop_back : ";
    for(auto i : v) {
        cout << i << " ";
    }

    v.pop_back(); // delete the last element

    cout << endl << "After pop_back : ";
    for(auto i : v) {
        cout << i << " ";
    }

    v.clear(); // delete all the elements in the vector but capacity remains same
    cout << endl << "Capacity of vector : " << v.capacity() << endl;
    cout << "Size of vector after clear : " << v.size() << endl;
    return 0;
}

// DEQUE -> Dynamic (We can do both insertion and deletion from starting and ending)

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(2); // element enters from back
    d.push_front(1); // element enters from front

    for(int i : d) {
        cout << i << " ";
    }

    // d.pop_back(); // remove elements from back
    // d.pop_front(); // remove elements from front

    cout << "Front element : " << d.front() << endl;
    cout << "Back element : " << d.back() << endl;
    cout << "Empty or not : " << d.empty() << endl;

    // d.erase(d.begin(), d.begin() + 1); // remove first element only

    // d.clear(); // clear all the elements in deque

    return 0;
}

// LIST -> list is made by using doubly linked list

#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> l;
    // list<int> l(5, 1); // list  of size 5 & all elements are initialized to 1
    // list<int> copy(l); // copying a list

    l.push_back(2);
    l.push_front(1);

    for(int i : l) {
        cout << i << " ";
    }

    // l.erase(l.begin()); // remove the first element



    return 0;
}

// STACK -> LIFO (Last In First Out)

#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<string> s;
    s.push("arin");
    s.push("jain");
    s.push("morena");
    s.push("cse");

    cout << "Size of stack : " << s.size() << endl;
    cout << "Empty or not : " << s.empty() << endl;

    cout << "Top element : " << s.top() << endl; // top element -> cse

    s.pop(); // remove the last entered element

    cout << "Top element after removal : " << s.top() << endl; // top element after removal -> morena

    return 0;
}

// QUEUE -> FIFO (First In First Out)

#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<string> q;
    q.push("arin");
    q.push("jain");
    q.push("morena");
    q.push("cse");

    cout << "Size of queue : " << q.size() << endl;
    cout << "Empty or not : " << q.empty() << endl;

    cout << "First element : " << q.front() << endl; // front element -> arin

    q.pop();

    cout << "First element after removal : " << q.front() << endl; // front element after removal -> jain

    return 0;
}

// PRIORITY QUEUE -> A queue whose first element is always be the greatest (by default)

#include <iostream>
#include <queue>
using namespace std;

int main() {

    // max heap
    priority_queue<int> max;

    // min heap
    priority_queue<int, vector<int>, greater<int>> min;

    max.push(2);
    max.push(3);
    max.push(1);

    int maxSize = max.size();
    for(int i = 0; i < maxSize; i++) {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;

    cout << "Size of priority_queue : " << max.size() << endl; // same for min
    cout << "Empty or not : " << max.empty() << endl; // same for min

    min.push(2);
    min.push(3);
    min.push(1);

    int minSize = min.size();
    for(int i = 0; i < minSize; i++) {
        cout << min.top() << " ";
        min.pop();
    }
    cout << endl;

    return 0;
}

// SET
// Set stores only unique elements
// there is no modification of elements
// returns the element in sorted order

#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> s;

    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(0);
    s.insert(9);
    s.insert(5);
    s.insert(5);
    s.insert(2);

    for(int i : s) {
        cout << i << " ";
    } // 0 2 3 5 9
    cout << endl;

    set<int> :: iterator itr = s.begin(); // set the iterator
    itr++;
    // s.erase(itr); // erase 2

    cout << "5 is present or not : " << s.count(5);

    return 0;
}

// MAP -> key and value
// returns the element in sorted order

#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int, string> m; // here int is 'key' and string is 'value'

    m[1] = "arin";
    m[8] = "jain";
    m[3] = "morena";

    m.insert({5, "cse"});

    for(auto i : m) {
        cout << i.first << " "; // first returns the key
        cout << i.second << " " << endl; // second returns the value
    }

    cout << "5 is present or not : " << m.count(5);

    m.erase(8); // to remove an element

    return 0;
} */
 
// ALGORITHMS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(3);

    cout << "Finding 3 : " << binary_search(v.begin(), v.end() + 1, 3) << endl; // if present -> 1 else -> 0
    
    int a = 5, b = 3;

    cout << "Max of a and b is : " << max(a, b) << endl;
    cout << "Min of a and b is : " << min(a, b) << endl;

    swap(a, b);
    cout << "Swapping of a and b : " << a << " " << b << endl;

    string name = "arin";
    reverse(name.begin(), name.end());
    cout << name << endl;

    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "after rotation" << " ";
    for(auto i : v) {
        cout << i << " ";
    }

    sort(v.begin(), v.end());
    cout << endl << "after sorting" << " ";
    for(auto i : v) {
        cout << i << " ";
    }

    return 0;
}