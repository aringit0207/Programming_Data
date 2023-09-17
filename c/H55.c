#include <stdio.h>
int main()
{
    int a = 432;
    int *ptr; // THIS IS A WILD POINTER
    ptr = &a; // ptr IS NO LONGER A WILD POINTER
    return 0;
}