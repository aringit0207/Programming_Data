#include <iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>
class Arin
{
    public:
    T1 a;
    T2 b;
    T3 c;
    Arin (T1 x, T2 y, T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};

int main()
{
    Arin<> a(4, 34.3, 'a');
    a.display();
    cout<<endl;
    Arin<float, char, char> j(4.3, 'a', 'j');
    j.display();
    return 0;
}