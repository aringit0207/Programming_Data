#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

/* Derived class syntax -
class {{derived_class_name}} : {{visibility_mode}} {{base_class_name}}
{
    class members/methods/etc...
}

NOTE:
1. Default visibility mode is private.
2. Public Visibility Mode : Public members of the base class becomes Public members of the derived class.
3. Private Visibility Mode : Public members of the base class becomes Private members of the derived class.
4. Private members of the base class are never inherited.

*/

// Creating a programmer class derived from Employee Base class

class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee arin(1), harbhajan(2);
    cout << arin.salary << endl;
    cout << harbhajan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}