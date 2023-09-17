#include <iostream>
using namespace std;

template <class T>
void swapp(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcAvg(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    return avg;
}

int main()
{
    float a;
    a = funcAvg(5.4, 3.6);
    cout << "The average is " << a << endl;
    int x = 3, y = 5;
    swapp(x, y);
    cout << x << " " << y;
    return 0;
}