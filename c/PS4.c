/*// QUESTION 1 BY DO WHILE
#include <stdio.h>
int main()
{
    int a, i = 1;
    printf("Write the number whose multiplication table you want-\n");
    scanf("%d", &a);
    do
    {
        printf("%d x %d = %d\n", a, i, a * i);
        i = i + 1;
    } while (i <= 10);
    return 0;
}

// QUESTION 1 BY WHILE
#include <stdio.h>
int main()
{
    int a, i = 1;
    printf("Write the number whose multiplication table you want-\n");
    scanf("%d", &a);
    while (i <= 10)
    {
        printf("%d x %d = %d\n", a, i, a * i);
        i = i + 1;
    }
    return 0;
}

// QUESTION 1 BY FOR
#include <stdio.h>
int main()
{
    int a, i = 1;
    printf("Write the number whose multiplication table you want-\n");
    scanf("%d", &a);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", a, i, a * i);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a, i = 10;
    printf("Multiplication table of 10 in reverse order-\n");
    while (i >= 1 && i <= 10)
    {
        printf("10 x %d = %d\n", i, 10 * i);
        i = i - 1;
    }
    return 0;
}

// QUESTION 5
#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    printf("The first 10 natural numbers is = ");
    while (i <= 10)
    {
        // printf("%d ", i);
        sum += i;
        i = i + 1;
    }
    printf("\nThe sum of first 10 natural numbers is = %d", sum);
    return 0;
}

// QUESTION 5 BY DO WHILE (QUESTION 6)
#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    printf("The first 10 natural numbers is = ");
    do
    {
        // printf("%d ", i);
        sum += i;
        i++;
    } while (i <= 10);
    printf("\nThe sum of first 10 natural numbers is = %d", sum);
    return 0;
}

// QUESTION 5 BY FOR (QUESTION 6)
#include <stdio.h>
int main()
{
    int i, sum = 0;
    printf("The first 10 natural numbers is = ");
    for (i = 1; i <= 10; i++)
    {
        // printf("%d ", i);
        sum += i;
    }
    printf("\nThe sum of first 10 natural numbers is = %d", sum);
    return 0;
}

// QUESTION 7
#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    while (i <= 10)
    {
        printf("8 x %d = %d\n", i, 8 * i);
        sum += 8 * i;
        i = i + 1;
    }
    printf("\nThe sum of numbers occuring in the multiplication table of 8 is %d", sum);
    return 0;
}*/

// QUESTION 8 // This is the iterative approach to find factorials.
#include <stdio.h>
int main()
{
    int i, f = 1;
    printf("Enter your number-\n");
    scanf("%d", &i);
    printf("The factorial of %d is ", i);
    for (i; i > 0; i--)
    {
        // printf("%d", i);
        f *= i;
    }
    printf("%d", f);
    return 0;
}

/*// QUESTION 9
#include <stdio.h>
int main()
{
    int i;
    while (i = 8)
    {
        printf("%d ", i);
    }
    return 0;
}

// QUESTION 10 BY WHILE
#include <stdio.h>
int main()
{
    int i = 1, factor = 0, num;
    printf("Enter the number-\n");
    scanf("%d", &num);
    while (i <= num)
    {
        if (num % i == 0)
            factor++;
        i++;
    }
    if (factor == 2)
    {
        printf("The given number is a prime number.");
    }
    else
    {
        printf("The given number is not a prime number.");
    }
    return 0;
}

// QUESTION 10 BY DO WHILE (QUESTION 11)
#include <stdio.h>
int main()
{
    int i = 1, num, factor = 0;
    printf("Enter the number-\n");
    scanf("%d", &num);
    do
    {
        if (num % i == 0)
            factor++;
        i++;
    } while (i <= num);

    if (factor == 2)
    {
        printf("The given number is a prime number.");
    }
    else
    {
        printf("The given number is not a prime number.");
    }
    return 0;
}


// QUESTION 10 BY FOR (QUESTION 11)
#include <stdio.h>
    int main()
{
    int i = 1, factor = 0, num;
    printf("Enter the number-\n");
    scanf("%d", &num);

    for (i; i <= num; i++)
    {
        if (num % i == 0)
            factor++;
    }
    if (factor == 2)
    {
        printf("The given number is a prime number.");
    }
    else
    {
        printf("The given number is not a prime number.");
    }
    return 0;
}*/