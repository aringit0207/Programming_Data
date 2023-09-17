#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main()
{
    // Complex c1;
    // c1.setData(4, 6);
    // c1.getData();

    // With the help of pointers
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex; // Using new operator
    // (*ptr).setData(4, 6);
    ptr->setData(4, 6); // Using arrow operator
    (*ptr).getData();

    // Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 5);
    ptr1->getData();

    return 0;
}