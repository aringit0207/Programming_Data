/* #include <iostream>
using namespace std;

void swapValue(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 4, b = 6;
    cout << a << " " << b<<endl;
    swapValue(&a, &b);              // This will swap a and b using pointer reference
    cout << a << " " << b;
    return 0;
} */

#include <iostream>
using namespace std;

void swapValue(int &a, int &b)
{
    int temp;
    temp =a;
    a = b;
    b = temp;
}
int main()
{
    int a = 4, b = 6;
    cout << a << " " << b<<endl;
    swapValue(a, b);                // This will swap a and b using reference variables
    cout << a << " " << b;
    return 0;
}