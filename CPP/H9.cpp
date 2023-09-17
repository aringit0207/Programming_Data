// IF ELSE
/* #include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age- ";
    cin >> age;
    if (age < 18)
    {
        cout << "You can not come to the party.";
    }
    else if (age == 18)
    {
        cout << "You can get a kid pass.";
    }
    else
    {
        cout << "You can come to the party.";
    }
} */

// SWITCH CASE
#include <iostream>
    using namespace std;
int main()
{
    int age;
    cout << "Enter your age- ";
    cin >> age;

    switch (age)
    {
    case 2:
        cout << "Your age is 2.";
        break;
    case 18:
        cout << "Your age is 18.";
        break;
    case 22:
        cout << "Your age is 22.";
        break;
    default:
        cout << "No special cases.";
        break;
    }
    return 0;
}