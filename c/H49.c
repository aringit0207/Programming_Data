/*
#include <stdio.h>

int sum=0;  // EXTERNAL VARIABLE
int func(int a, int b)
{
    // int sum = a + b;
    // auto int sum = a + b;    // AUTOMATIC VARIABLE
    return sum;
}

int main()
{
    int sum = func(4, 2);
    printf("The sum is %d", sum);
    return 0;
}

// EXTERNAL VARIABLE

#include <stdio.h>
// #include "b.c"

int func(int a, int b)
{
    extern int sum;
    return sum;
}

int sum = 423;
int main()
{
    printf("The sum is %d", sum);
    return 0;
} */

// STATIC VARIABLE

#include <stdio.h>
int func()
{
    static int myVar;
    myVar++;
    printf("Value of myVar is %d\n", myVar);
    return 0;
}

int main()
{
    register int a; // REGISTER VARIABLE IS USED TO ACCESS THE VARIABLES FAST
    a = func();
    a = func();
    a = func();
    a = func();
    return 0;
}