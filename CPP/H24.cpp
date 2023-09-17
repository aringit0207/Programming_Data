#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of the employee is " << id << " and this is employee no " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

// count is the static data member of class Employee
int Employee ::count; // default value of count is '0' & here we can initialize count = 100 (any no)

int main()
{
    Employee arin, akash, raj;
    arin.setData();
    arin.getData();
    Employee::getCount();

    akash.setData();
    akash.getData();
    Employee::getCount();

    raj.setData();
    raj.getData();
    Employee::getCount();
    
    return 0;
}