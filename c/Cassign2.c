/*
// QUES 2

#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        x *= i;
    }
    return x;
}

float power(float x, int i)
{
    float pow = 1;
    for (int j = 1; j <= i; j++)
    {
        pow *= x;
    }
    return pow;
}

int main()
{
    int x, n;
    float add = 1;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Upto term : ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        add += power(x, i) / (float)factorial(i);
    }
    printf("Answer is : %f", add);
    return 0;
}

// QUES 3

#include <stdio.h>
int main()
{
    float num;
    printf("Enter your number in decimal: ");
    scanf("%f", &num);
    int n = (int)num, j = 0, input;
    printf("In binary - Enter '2'\nIn octal - Enter '8'\nIn Hexadecimal - Enter '16'\n");
    scanf("%d", &input);
    float d = num - n;
    int arr[50];
    while (n != 0)
    {
        arr[j] = n % input;
        n = n / input;
        j++;
    }
    printf("Your required conversion is ");
    for (int i = j - 1; i >= 0; i--)
    {
        if (arr[i] > 0 && arr[i] <= 9)
        {
            printf("%d", arr[i]);
        }
        else
        {
            int c = (char)(arr[i] + 55);
            printf("%c", c);
        }
    }
    printf(".");
    for (int i = 0; i < 5; i++)
    {
        d = input * d;
        if (d >= 1 && d <= 9)
        {
            printf("%d", (int)d);
            d = d - (int)d;
        }
        else if (d > 9)
        {
            int ch = (char)((int)d + 55);
            printf("%c", ch);
            d = d - (int)d;
        }
        else
        {
            printf("%d", (int)d);
        }
    }
    return 0;
}

// QUES 4

#include <stdio.h>
int main()
{
    int n, x = 1;
    printf("Enter your num: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        x *= i;
    }
    printf("The factorial of %d is %d", n, x);
    return 0;
}

// QUES 5

#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char str[] = {"This is a book"};
    int l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    printf("No. of vowels is %d", count);
    return 0;
} */

// QUES 1

#include <stdio.h>
int main()
{
    int sum = 10000;
    int i = 0;
    while (sum < 20000)
    {
        sum += sum / 100;
        i++;
    }
    printf("Numbers of months required to double 10000 Rupees is %d", i);
    return 0;
}