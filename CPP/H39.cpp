#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

/*
                            Public Derivation       Private Derivation      Protected Derivation
    1. Private members      Not Inherited           Not Inherited           Not Inherited
    2. Protected members    Protected               Private                 Protected
    3. Public members       Public                  Private                 Protected
*/

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a; // will not work since a is protected in both base and derived class  
    return 0;
}