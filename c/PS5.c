/* // QUESTION 1 BY ITERATIVE IMPLEMENTATION
#include <stdio.h>
int main() {
    float a, b, c;

    printf("Enter first number - ");
    scanf("%f",&a);

    printf("Enter second number - ");
    scanf("%f",&b);

    printf("Enter third number - ");
    scanf("%f",&c);

    printf("The average of %f, %f and %f is %f", a, b, c, (a+b+c)/3);
}

// QUESTION 1 BY FUNCTION IMPLEMENTATION
#include <stdio.h>

float average(float a, float b, float c);
int main()
{
    float a, b, c;
    printf("Enter first number- ");
    scanf("%f", &a);
    printf("Enter second number- ");
    scanf("%f", &b);
    printf("Enter third number- ");
    scanf("%f", &c);
    printf("The average of %f, %f and %f is %f", a, b, c, average(a, b, c));

    return 0;
}

float average(float a, float b, float c)
{
    float avg = ((a + b + c) / 3);
    return avg;
}

// QUESTION 2
#include <stdio.h>
float CTF(float c); // FUNCTION PROTOTYPE             // CTF = CELCIUS TO FARENHEIT
int main()
{
    float celcius;
    printf("Enter temperature in Celcius - ");
    scanf("%f", &celcius);
    printf("Above temperature in Farenheit is %f", CTF(celcius)); // FUNCTION CALL
    return 0;
}

float CTF(float c)
{ // FUNCTION DEFINITION
    float f = (c * 1.8) + 32;
    return f;
}

// QUESTION 3
#include <stdio.h>
float force(int mass);
int main()
{
    int m;
    printf("Enter mass in KG - ");
    scanf("%d", &m);
    printf("The force of attraction on %d KG mass is %.2f N", m, force(m));
    return 0;
}

float force(int mass)
{
    float f = mass * 9.8;
    return f;
}

// QUESTION 4
#include <stdio.h>
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
}

// QUESTION 5
#include <stdio.h>
int main()
{
    int a = 4;
    printf("%d %d %d", a, ++a, a++);
    return 0;
}

// QUESTION 6
#include <stdio.h>
int sum(int n);

int main() {
    int a;
    printf("Enter the nth element- ");
    scanf("%d", &a);
    printf("The sum of first %d natural numbers is %d", a, sum(a));
    return 0;
}

int sum(int n) {
    if (n==1) {
        return 1;
    }
    else {
        return n+sum(n-1);
    }
}*/

// QUESTION 7
#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}