#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream out;
    // out.open("sample60.txt");
    // out << "This is me.\n";
    // out << "Arin Jain";
    // out.clear();

    ifstream in;
    string st1, st2;
    in.open("sample60.txt");
    // in >> st1 >> st2;
    // cout << st1 << " " << st2;

    while (in.eof() == 0)
    {
        getline(in, st1);
        cout << st1 << endl;
    }
    in.close();

    return 0;
}