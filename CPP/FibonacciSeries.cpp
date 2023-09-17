// ITERATIVE
#include <iostream>
using namespace std;
int main()
{
    int a=0, b=1, c;
    cout<<a<<" "<<b;
    for(int i=0; i<10; i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<" "<<c;
    }
    return 0;
}

// RECURSION
#include <iostream>
using namespace std;

int fibonacci(int a)
{
    if (a == 1)
    {
        return 0;
    }
    else if (a == 2)
    {
        return 1;
    }
    return (fibonacci(a - 1) + fibonacci(a - 2));
}
int main()
{
    int a;
    cin >> a;
    cout << "Fibonacci series upto " << a << " is ";
    for (int i = 1; i <= a; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}