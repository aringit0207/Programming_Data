/* #include <iostream>
using namespace std;
int c = 45;
int main()
{
    int a, b, c;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is " << c << endl;
    cout << "The value of global c is " << ::c;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    return 0;
}

// REFERENCE VARIALBLES
#include <iostream>
using namespace std;
int main()
{
    int a = 65;
    int &b = a;
    cout << a << endl;
    cout << b << endl;
    return 0;
}

// TYPECASTING
#include <iostream>
using namespace std;
int main()
{
    int a = 45;
    float b = 54.56;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;

    cout << "The value of b is " << (int)b << endl;
    cout << "The value of b is " << int(b) << endl;
    int c = int(b);
    return 0;
}

// CONSTANTS
#include <iostream>
using namespace std;
int main()
{
    const int a = 34;
    cout << "The value of a is " << a << endl;
    a = 56; // THE VALUE OF 'a' DOESN'T CHANGE BECAUSE WE USE CONST ABOVE
    cout << "The value of a is " << a << endl;
    return 0;
} */

// MANIPULATORS
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 4, b = 543, c = 545435;
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of c is " << c << endl;

    cout << "The value of a with setw is " << setw(6) << a << endl;
    cout << "The value of b with setw is " << setw(6) << b << endl;
    cout << "The value of c with setw is " << setw(6) << c << endl;
    return 0;
}