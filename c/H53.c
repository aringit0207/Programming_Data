#include <stdio.h>
int main()
{
    int a=43;
    int* ptr;
    // ptr=&a;
    ptr=NULL;

    if(ptr!=NULL)
    {
    printf("%d\n", *ptr);
    }
    
    else
    {
        printf("The pointer is a null pointer and cannot be dereferenced.");
    }

    return 0;
}