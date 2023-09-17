// INLINE FUNCTION
/* #include <iostream>
using namespace std;

inline int product(int a, int b) // Make inline fuction only when it has few lines of codes
{
    return a*b;
}
int main()
{
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    return 0;
} */

// DEFAULT ARGUMENT
#include <iostream>
using namespace std;

float moneyReceived(int money, float factor = 1.04)
{
    return money * factor;
}
int main()
{
    int money = 100000;
    cout << "If you have " << money << " Rs in your account, you will receive " << moneyReceived(money) << " Rs after 1 year."<<endl;
    cout << "For VIP: If you have " << money << " Rs in your account, you will receive " << moneyReceived(money, 1.1) << " Rs after 1 year.";
    return 0;
}