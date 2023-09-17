/*
// Ques 1(d)
#include <stdio.h>
int main()
{
    int a, flag = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            flag++;
        }
    }
    if (flag == 2)
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}

// Ques 1(e)
#include <stdio.h>
#include <math.h>
int factorial(int f)
{
    int fac = 1;
    for (int i = 1; i <= f; i++)
    {
        fac *= i;
    }
    return fac;
}
int main()
{
    int n;
    float a, x, sum = 0;
    scanf("%f%d", &x, &n);
    a = x;
    x *= (3.1415 / 180);
    for (int i = 1, j = 1; i <= n; i++, j = j + 2)
    {
        if (i % 2 == 0)
        {
            sum -= pow(x, j) / factorial(j);
        }
        else
            sum += pow(x, j) / factorial(j);
    }
    printf("Sin(%0.1f) = %f", a, sum);
    return 0;
}

// Que 2(c)
#include <stdio.h>
int main()
{
    int ul, ll;
    scanf("%d%d", &ul, &ll);
    for(int i=ul; i<=ll; i++)
    {
        printf("%d, %d, %d\n", i, i*i, i*i*i);
    }
    return 0;
}

// Que 2(d)
#include <stdio.h>
int main()
{
    int x=3, y=4, z=5;
    float a=2.5, b=3.5, c=4.5;
    float d=(float)b*(y%x)*y/2||z*x;
    // float d=++x/4*(z++)+y/x++*b;
    // float d=y<c||x>a*++x&&z<=5*b;
    printf("%f", d);
    return 0;
}

// Que 2(e)
#include <stdio.h>
int main()
{
    int d1, m1, y1, d2, m2, y2;
    scanf("%d%d%d%d%d%d", &d1, &m1, &y1, &d2, &m2, &y2);
    if(d1<1||d1>31||d2<1||d2>31||m1<0||m1>12||m2<0||m2>12||y1<0||y2<0)
    {
        printf("Invalid date");
        exit(0);
    }
    else
    {

    }
    return 0;
}

// Que 3(b)
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 2; i < 10; i++)
    {
        for (j = 2; j <= 5; j++)
        {
            if (!(i % j))
                break;
            if (j > (i / j))
                printf("%d", i);
        }
    }
    return 0;
}

// Que 3(c)
#include <stdio.h>
int function(int n)
{
    if (n % 2 == 0)
    {
        n--;
        return function(n);
    }
    else
    {
        if (n <= 0)
        {
            return 0;
        }
        else
        {
            return n + function(n - 2);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", function(n));
    return 0;
}

// Que 3(d)
#include <stdio.h>
int amicable(int s, int e)
{
    for(int i=s; i<=e; i++)
    {
        for(int j=i+1; j<=e; j++)
        {
            int sum1=0, sum2=0;
            for(int k=1; k<=i/2; k++)
            {
                if(i%k==0)
                {
                    sum1 += k;
                }
            }
            for(int k=1; k<=j/2; k++)
            {
                if(j%k==0)
                {
                    sum2 += k;
                }
            }
            if(i==sum2&&j==sum1)
            {
                printf("%d, %d are amicable pair.\n", i, j);
            }
        }
    }
    return 0;
}
int main()
{
    int start, end;
    scanf("%d%d", &start, &end);
    amicable(start, end);
    return 0;
}

// Que 4(a)
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;
    int *ptr3 = ptr2 + 3;
    printf("%d\n", *ptr2);
    printf("%ld\n", ptr2 - ptr1);
    printf("%d\n", *(arr + 4));
    return 0;
}

// Que 4(c)
#include <stdio.h>
#include <string.h>
int reverse(char *str, int a, int b)
{
    char temp;
    int x = a;
    int y = b;
    for (int i = 0; i <= (y - x) / 2; i++)
    {
        temp = *(str + x + i);
        *(str + x + i) = *(str + y - i);
        *(str + y - i) = temp;
    }
    printf("%s", str);
    return 0;
}
int main()
{
    char str[20];
    int a, b;
    scanf("%s%d%d", &str, &a, &b);
    reverse(str, a, b);
    return 0;
}

// Que 4(d)
#include <stdio.h>
int main()
{
    int arr[15] = {0,1,0,1,1,0,0,1,1,1,1,0,1,0,1};
    int count = 0, max = 0;
    for(int i=0; i<15; i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if(count>max)
        {
            max=count;
        }
    }
    printf("%d", max);
    return 0;
} */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee
{
    int empId;
    char ename[50];
    int age;
    int salary;

};

int main()
{
    int n;
    scanf("%d", &n);
    struct employee empl[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d %s %d %d", &empl[i].empId, empl[i].ename, &empl[i].age, &empl[i].salary);
    }

    FILE *ptr;
    ptr=fopen("a.txt", "w");
    for(int i=0; i<n; i++)
    {
        fprintf(ptr, "%d\n%s\n%d\n%d\n", empl[i].empId, empl[i].ename, empl[i].age, empl[i].salary);
    }
    fclose(ptr);
    return 0;
}