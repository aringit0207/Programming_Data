/* #include <stdio.h>
// #include "H51_RPS.c"
#define PI 3.14
#define SQUARE(r) r*r

int main()
{
    int a=5;
    float b=PI;
    printf("The value of PI is %.2f\n", PI);
    printf("The area of circle of radius 5 is %.2f\n", PI*SQUARE(a));
    return 0;
} 

#include <stdio.h>
#define x 10
int main()
{
    printf("%d",x);
    #undef x
    printf("%d",x); // throw an error

    return 0;
} 

#include <stdio.h>
#define x 10
int main()
{
    #ifdef x
    printf("Hello");
    #else
    printf("Hi");
    #endif

    #ifndef x
    printf("Hello");
    #else
    printf("Hi");
    #endif

    #if x>5
    printf("Hello");
    #elif x<2
    printf("Hey");
    #else
    printf("Hi");
    #endif

    return 0;
} */

// SADLY PRAGMA IS NOT WORKING IN THIS GCC COMPILER :(

// #pragma -> #pragma startup & #pragma exit
// generally first main() function call then x() and then y()
// but with the help of PRAGMA we can control the sequence of function calling

#include <stdio.h>
void x();
void y();
#pragma startup x
#pragma exit y

int main()
{
    printf("This is main\n");
    x();
    y();
    return 0;
}

void x()
{
    printf("This is x\n");
}
void y()
{
    printf("This is y\n");
}