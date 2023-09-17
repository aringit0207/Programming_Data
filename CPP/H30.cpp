// Parameterized Constructor
/*
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printNum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // This is a parameterized constructor as it accepts arguments.
{
    a = x;
    b = y;
}

int main()
{
    Complex a = Complex(5, 7);
    a.printNum();

    Complex b(4, 6);
    b.printNum();
    return 0;
} */

// Quick Quiz

#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend void distance(Point p1, Point p2);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

void distance(Point p1, Point p2)
{
    int x_diff = p2.x - p1.x;
    int y_diff = p2.y - p1.y;
    int result = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
    cout << "Difference between point is " << result << endl;
}

int main()
{
    Point a(1, 2);
    a.displayPoint();
    Point b(4, 6);
    b.displayPoint();

    distance(a, b);

    return 0;
}