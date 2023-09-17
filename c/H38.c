/* #include <stdio.h>
int main()
{
    // typedef <previous_name> <alias_name>;
    typedef int integer;
    integer i = 4;
    printf("Value of i is %d", i);
    return 0;
} */

#include <stdio.h>
int main()
{
    int *a, b; // IN THIS 'a' IS A POINTER AND 'b' IS A NORMAL INTERGER
    int c=10;
    a=&c;
    b=c;

    typedef int* integer; // IN THIS 'a' AND 'b' BOTH ARE POINTERS
    integer d, e;
    d=&c;
    e=&c;
    return 0;
}