#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator iter;
    for (iter = l.begin(); iter != l.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // list of size 0

    list1.push_back(4);
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(5);
    display(list1);

    // list1.remove(3); // this will remove all 3 values in list
    // list1.pop_front(); // delete element from front
    // list1.pop_back(); // delete element from back
    // list1.sort(); // this function will sort the list
    // list1.reverse(); // this function will reverse the list
    // display(list1);

    list<int> list2(3); // empty list of size 3
    list<int>::iterator it;
    it = list2.begin();

    *it = 5;
    it++;
    *it = 54;
    it++;
    *it = 67;
    it++;
    display(list2);

    list1.merge(list2);
    cout << "After merging: ";
    display(list1);

    return 0;
}