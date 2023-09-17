// CALL BY VALUE

/* #include <stdio.h>
int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int a = 5, b = 8;
    printf("%d", add(a, b));
}

// CALL BY REFERENCE 

// EXAMPLE - 1
#include <stdio.h>
void changevalue(int *a)
{
    *a = 3453;
}

int main()
{
    int a = 6;
    printf("The value of a is %d\n", a);
    changevalue(&a);
    printf("The value of a is now %d\n", a);
    return 0;
}

EXAMPLE - 2
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;  
}

int main()
{
    int a = 34, b = 74;
    printf("%d and %d\n", a, b);
    swap(&a, &b);
    printf("%d and %d\n", a, b);
    return 0;
} */

// QUICK QUIZ

#include <stdio.h>
void func(int *x, int *y)
{
    int add = *x + *y;
    int sub = *x - *y;
    *x = add;
    *y = sub;
}

int main()
{
    int a = 4, b = 3;
    printf("The value of a and b is %d and %d\n", a, b);
    func(&a, &b);
    printf("The value of a and b is now %d and %d\n", a, b);
    return 0;
}