#include <iostream>
using namespace std;

template <class T>
class Arin
{
public:
    T data;
    Arin(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Arin<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I am first func " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatised func " << a << endl;
}

int main()
{
    Arin<float> a(5.6);
    cout << a.data << endl;
    a.display();
    func(5);  // Exact match takes the highest priority
    func1(5); // Exact match takes the highest priority
}