#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    sumRealComplex(Complex, Complex);
    sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Individually declaring functions as friend
    // friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator ::sumCompComplex(Complex o1, Complex o2);

    // Aliter: Declaring the entire Calculator class as friend
    friend class Calculator;

public:
    void setNumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i";
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setNumber(1, 4);
    c2.setNumber(5, 7);

    Calculator calc;
    int res = calc.sumRealComplex(c1, c2);
    cout << "The sum of real part of c1 and c2 is " << res << endl;
    int res1 = calc.sumCompComplex(c1, c2);
    cout << "The sum of comp part of c1 and c2 is " << res1 << endl;
    return 0;
}