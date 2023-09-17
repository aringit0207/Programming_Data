/*
// QUESTION 1 (a)
#include <stdio.h>
int main()
{
    int a, b, c, num;
    printf("Enter your number- ");
    scanf("%d", &num);
    if (num > 99 && num < 1000)
    {
        a = num % 10;
        num = num / 10;
        b = num % 10;
        num = num / 10;
        c = num % 10;
        num = num / 10;
        printf("The sum of digits of the number is %d\n", a + b + c);
        printf("The sum of first and third digit is %d", a + c);
    }
    else
    {
        printf("Please enter a three digit number.");
    }
    return 0;
}

// QUESTION 2
#include <stdio.h>
int main()
{
    int a, b, c, avg;
    printf("Enter first score- ");
    scanf("%d", &a);
    printf("Enter second score- ");
    scanf("%d", &b);
    printf("Enter third score- ");
    scanf("%d", &c);
    avg = (a + b + c) / 3;
    if (avg >= 90)
    {
        printf("You got A grade.");
    }
    else if (avg >= 70)
    {
        printf("You got B grade.");
    }
    else if (avg >= 50)
    {
        printf("You got C grade.");
    }
    else if (avg < 50)
    {
        printf("You got F grade.");
    }
    return 0;
}

// QUESTION 3
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character- ");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("A Vowel");
    }
    else
    {
        printf("A Consonant");
    }
    return 0;
}

// QUESTION 4
#include <stdio.h>
int main()
{
    int unit;
    float a, b, c, d;
    printf("Enter Consumption Unit- ");
    scanf("%d", &unit);
    if (unit >= 0 && unit <= 200)
    {
        a = unit * 1.50;
        printf("The amount to be paid is %f", a);
    }
    else if (unit >= 201 && unit <= 400)
    {
        b = 150 + (unit % 100) * 0.15;
        printf("The amount to be paid is %f", b);
    }
    else if (unit >= 401 && unit <= 600)
    {
        c = 270 + (unit % 100) * 0.60;
        printf("The amount to be paid is %f", c);
    }
    else if (unit > 600)
    {
        d = 425 + (unit % 100) * 0.95;
        printf("The amount to be paid is %f", d);
    }
    return 0;
} */

// QUESTION 5
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number- ");
    scanf("%d", &num);
    while (num != 0)
    {
        if (num >= 1000)
        {
            printf("M");
            num = num - 1000;
        }
        else if (num >= 500)
        {
            printf("D");
            num = num - 500;
        }
        else if (num >= 100)
        {
            printf("C");
            num = num - 100;
        }
        else if (num >= 50)
        {
            printf("L");
            num = num - 50;
        }
        else if (num > 10)
        {
            printf("X");
            num = num - 10;
        }
        else if (num >= 5)
        {
            printf("V");
            num = num - 5;
        }
        else if (num >= 1)
        {
            printf("I");
            num = num - 1;
        }
    }
    return 0;
}