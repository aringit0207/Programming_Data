// QUES 1
/*
#include <stdio.h>
int perfectNum(int s, int e)
{
    printf("Perfect numbers between %d and %d are ", s, e);
    for(int i=s; i<=e; i++)
    {
        int n=i, sum=0;
        for(int j=1; j<=n/2; j++)
        {
            if(n%j==0)
            {
                sum+=j;
            }
        }
        if(sum==n)
        printf("%d ", n);
    }
    return 0;
}
int main()
{
    int start, end;
    printf("Enter the range:\n");
    scanf("%d %d", &start, &end);
    perfectNum(start, end);
    return 0;
}

// QUES 2

#include <stdio.h>

int amicableNum(int n1, int n2)
{
    int s1=0, s2=0;
    for(int i=1; i<=n1/2; i++)
    {
        if(n1%i==0)
        s1+=i;
    }
    for(int j=1; j<=n2/2; j++)
    {
        if(n2%j==0)
        s2+=j;
    }
    if(n1==s2&&n2==s1)
    {
        printf("%d and %d is a amicable pair.", n1, n2);
    }
    else
    {
        printf("%d and %d is not a amicable pair.", n1, n2);
    }
    return 0;
}
int main()
{
    int num1 ,num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    amicableNum(num1, num2);
    return 0;
}

// QUES 4(a)

#include <stdio.h>
#include <string.h>
int main()
{
    char a1[100];
    printf("Enter the string: ");
    gets(a1);
    char a2[100];
    int count = 0;

    for (int i = 0; i < strlen(a1); i++)
    {
        if ((a1[i] >= 'a' && a1[i] <= 'z') || (a1[i] >= 'A' && a1[i] <= 'Z'))
        {
            a2[count] = a1[i];
            count++;
        }
    }
    a2[count] = '\0';
    puts(a2);
    return 0;
}

// QUES 4(b)

#include <stdio.h>
#include <string.h>
int main()
{
    char a1[100];
    printf("Enter the string: ");
    gets(a1);
    int alphabets = 0, digit = 0, schar = 0;

    for (int i = 0; i < strlen(a1); i++)
    {
        if ((a1[i] >= 'a' && a1[i] <= 'z') || (a1[i] >= 'A' && a1[i] <= 'Z'))
        {
            alphabets += 1;
        }
        else if (a1[i] >= '0' && a1[i] <= '9')
        {
            digit += 1;
        }
        else
        {
            schar += 1;
        }
    }
    printf("Total number of alphabets are %d\n", alphabets);
    printf("Total number digits are %d\n", digit);
    printf("Total number of special characters are %d\n", schar);
    return 0;
}

// QUES 3

#include <stdio.h>
int RussianPeasant(int n1, int n2)
{
    int sum = (n1 % 2 == 1) ? n2 : 0;
    while (n1 > 0)
    {
        n1 /= 2;
        n2 *= 2;
        if (n1 % 2 == 1)
        {
            sum += n2;
        }
    }
    return sum;
}
int main()
{
    int num1, num2;
    printf("Enter two positive numbers:\n");
    scanf("%d %d", &num1, &num2);
    int t = RussianPeasant(num1, num2);
    printf("%d", t);
    return 0;
}

#include <stdio.h>
int RussianPeasant(int n1, int n2)
{
    if (n1 == 0)
    {
        return 0;
    }
    return (((n1 % 2 == 1) ? n2 : 0) + RussianPeasant(n1 / 2, n2 * 2));
}
int main()
{
    int num1, num2;
    printf("Enter two positive numbers:\n");
    scanf("%d %d", &num1, &num2);
    int t = RussianPeasant(num1, num2);
    printf("%d", t);
    return 0;
}

// QUES 5(a)

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abcdcsdfabccb";
    int n = strlen(str);
    char str1[n], str2[n];
    int count, flag = 0, max = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < i + 1 + k; j++)
        {
            str1[k] = str[j];
            str1[k + 1] = '\0';
            if (k < n)
            {
                k++;
            }
            for (int i = 0; i < strlen(str1); i++)
            {
                flag = 2;
                if (str1[i] != str1[strlen(str1) - i - 1])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 2)
            {
                count = strlen(str1);
                if (count > max)
                {
                    max = count;
                    strcpy(str2, str1);
                }
            }
        }
        k = 0;
    }
    printf("%s", str2);
    return 0;
} */

// QUES 5(b)

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100] = "hussain";
    char str2[100] = "arin";
    char str3[100];
    int l1 = strlen(str1), l2 = strlen(str2), c = 0, d = 0;
    for (int i = 0; i < l1; i++)
    {
        for (int j = d; j < l2; j++)
        { 
            if (str1[i] == str2[j])
            {
                str3[c++] = str1[i];
                d = j + 1;
            }
        }
    }
    printf("%s", str3);
    return 0;
}