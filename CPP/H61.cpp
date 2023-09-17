#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Connecting our file with aout stream
    ofstream aout("sample60.txt");

    // Creating a name string and filling it with the string entered by the user
    string st;
    cout << "Enter your name: ";
    cin >> st;

    // Writing a string to the file
    aout << "My name is " << st;
    aout.close();

    ifstream ain("sample60.txt");
    string st1;
    // ain>>st1;
    getline(ain, st1);
    cout << st1;
    ain.close();

    return 0;
}