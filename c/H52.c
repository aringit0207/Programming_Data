#include <stdio.h>
int main()
{
    int a = 424;
    float b = 4.34;
    void *ptr;

    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));
    return 0;
}