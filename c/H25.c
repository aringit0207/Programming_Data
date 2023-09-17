// FIBONACCI SERIES

// BY RECURSION
/*#include <stdio.h>
int fib(int n);

int main()
{
    int a;
    printf("Enter the element- ");
    scanf("%d", &a);
    printf("The %dth element of Fibonacci Series is %d", a, fib(a));
    return 0;
}

int fib(int n)
{
    if (n == 1)
    {
        return (0);
    }
    else if (n == 2)
    {
        return (1);
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}*/

// BY ITERATION
#include <stdio.h>
int main()
{
    int a = 1, b = 0, c, t;
    printf("Enter the element- ");
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        c = a + b; // 1,1,2,3,5
        a = b;     // 0,1,1,2,3
        b = c;     // 1,1,2,3,5
    }
    printf("The %dth element of Fibonacci Series is %d", t, a);
    return 0;
}