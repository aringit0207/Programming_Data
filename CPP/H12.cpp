#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *b = &a;
    // (Address of) operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // Dereference operator
    cout << "The value at address b is " << *b << endl;

    // Pointer to pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The address of c is " << &c << endl;
    cout << "The value at address c(b) is " << **c << endl;
    return 0;
}