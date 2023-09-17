#include <iostream>
using namespace std;
int main()
{
    // ARRAYS
    int marks[] = {43, 65, 87, 23};
    int i = 0;
    while (i < 4)
    {
        cout << "The value at " << i << " is " << marks[i] << endl;
        i++;
    }

    // POINTERS AND ARRAYS ARITHEMETIC
    int *p = marks;
    cout << "The value of index 0 is " << *p << endl;
    cout << "The value of index 1 is " << *(p + 1) << endl;
    cout << "The value of index 2 is " << *(p + 2) << endl;
    cout << "The value of index 3 is " << *(p + 3) << endl;

    return 0;
}
