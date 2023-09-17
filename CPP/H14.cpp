/* // STRUCTURE
#include <iostream>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    int salary;
};

int main()
{
    struct employee Arin, Harbhajan;
    Arin.eId=435435;
    Arin.favChar='a';
    Arin.salary=100000;
    Harbhajan.eId=908808;
    Harbhajan.favChar='r';
    Harbhajan.salary=200000;

    cout<<"The value is "<<Arin.eId<<endl;
    cout<<"The value is "<<Arin.favChar<<endl;
    cout<<"The value is "<<Arin.salary<<endl;

    cout<<"The value is "<<Harbhajan.eId<<endl;
    cout<<"The value is "<<Harbhajan.favChar<<endl;
    cout<<"The value is "<<Harbhajan.salary<<endl;

    return 0;
} 

// UNIONS
#include <iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    union money a1;
    
    a1.rice =34;
    a1.car='a';
    cout<<a1.car;

    return 0;
} */

// ENUM
#include <iostream> 
using namespace std;

int main()
{
    enum meal{breakfast, lunch, dinner};
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    meal m1 = breakfast;
    cout<<m1;
    return 0;
}