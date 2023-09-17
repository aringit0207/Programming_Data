// QUESTION 1
/* #include <stdio.h>
int main()
{
    int a = 324;
    int *b = &a;
    printf("The address of a is %p\n", &a);
    printf("The value of a is %d", *b);
    return 0;
} 

// QUESTION 2
#include <stdio.h>
void func(int a)
{
    // int *b = &a; 
    printf("The address of %d is %u\n", a, &a);
}

int main()
{
    int i=4;
    printf("The address of %d is %u\n", i, &i);
    func(i);
    // printf("The address of i is %u\n", &i);
    return 0;
} 

// QUESTION 3
#include <stdio.h>
void changevalue(int *i)
{
    *i = 400;
}

int main()
{
    int a = 40;
    printf("The value of a is %d\n", a);
    changevalue(&a);
    printf("The value of a is %d\n", a);
    return 0;
} 

// QUESTION 4
#include <stdio.h>
int func(int *x, int *y)
{
    int sum = *x + *y;
    int avg = (*x + *y)/2;
    *x = sum;
    *y= avg;
    return 0;
}

int main()
{
    int a=4, b=6;
    func(&a, &b);
    printf("The sum and average of 4 and 6 is %d and %d respectively", a, b);
    return 0;
} 

// QUESTION 5
#include <stdio.h>
int main()
{
    int a=5;
    int *b=&a;
    int **c=&b;
    printf("The value of a is %d", **c);
    return 0;
} */

// QUESTION 6
#include <stdio.h>
int changevalue(int i)
{
    i = 400;
    return 0;
}

int main()
{
    int a = 40;
    printf("The value of a is %d\n", a);
    changevalue(a);
    printf("The value of a is %d\n", a);
    return 0;

}