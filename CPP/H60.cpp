#include <iostream>
#include <fstream>
using namespace std;

/*
The useful classes for working with files in C++ are:
1. ifstream --> derived from fstreambase
1. ofstream --> derived from fstreambase
*/

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the construtor
// 2. Using the member function open() of the class

int main()
{
    string st = "Arin Jain";
    string st2;

    // Opening file using constructor and writing it
    // ofstream out("sample60.txt"); // Write operation
    // out<<st;

    // Opening file using constructor and reading it
    ifstream in("sample60.txt"); // Read operation
    // in>>st2; // Prints only first letter just before space
    getline(in, st2);
    cout << st2;

    return 0;
}