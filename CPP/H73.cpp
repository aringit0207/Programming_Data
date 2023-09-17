#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Arin"] = 94;
    marksMap["Harbhajan"] = 98;

    marksMap.insert({{"Ayush", 95}, {"Hussain", 96}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max_size is: " << marksMap.max_size() << endl;
    cout << "The empty return value is: " << marksMap.empty() << endl;

    return 0;
}