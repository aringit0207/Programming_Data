#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:

    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the object of its class.

    Complex(void); // Constructor Declaration
    void printNum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // This is a default constructor as it accepts no arguments.
{
    a = 10;
    b = 20;
}

int main()
{
    Complex c;
    c.printNum();
    return 0;
}

/* Characteristics of Constructors

1. It should be declared in the public section of class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return type.
4. It can have default arguments.
5. We cannot refer to their address.

*/