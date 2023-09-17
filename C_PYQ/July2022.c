// QUES 2(e)
/* #include <stdio.h>
#include <math.h>
int main()
{
    float x;
    int n;
    scanf("%f%d", &x, &n);
    float sum=x;
    for(int i=0, j=3; i<n-1; i++, j=j+2)
    {
        for(int k=1; k<j; k++)
        {
            if(k%2==1)
            {
                sum += pow(x, j)*k;
            }
            else
            {
                sum += pow(x, j)/k;
            }
        }
        sum = sum/j;
    }
    // sum *= (3.1415)/180;
    printf("%.2f", sum);
    return 0;
}printf("Not A Perfect Number!");

// QUES 3(c)
#include <stdio.h>
int isprime(int n)
{
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            flag++;
        }
    }
    if (flag == 2)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (isprime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}

// QUES 4(c)
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50] = "Programming in Z is fun";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'z' || str[i] == 'Z' || str[i] == ' ')
        {
            str[i] = str[i];
        }
        else
        {
            str[i] += 1;
        }
    }
    printf("%s", str);
    return 0;
}

// QUES 4(d)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employees
{
    int id;
    char name[50];
    int salary;
};

int main()
{
    int n;
    printf("Enter the numbers of employees: ");
    scanf("%d", &n);
    struct employees worker[n];
    printf("Enter the details of employees:-\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %d", &worker[i].id, worker[i].name, &worker[i].salary);
    }
    printf("Details of your employees whose salary is above 5000:-\n");
    for (int i = 0; i < n; i++)
    {
        if (worker[i].salary > 5000)
        {
            printf("%d\n%s\n%d", worker[i].id, worker[i].name, worker[i].salary);
        }
    }

    FILE *ptr;
    ptr = fopen("record.txt", "w+");

    if (ptr == NULL)
    {
        printf("\nError!");
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        if (worker[i].salary > 5000)
        {
            fprintf(ptr, "%d\n%s\n%d", worker[i].id, worker[i].name, worker[i].salary);
        }
    }
    fclose(ptr);

    return 0;
} */

