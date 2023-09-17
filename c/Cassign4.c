/* // Ques 1(a)

#include <stdio.h>
int main()
{
    int a = 4;
    int *p = &a;
    printf("Use of address of operator: %u\n", &p);
    printf("Use of value at address operator: %d\n", *p);
    return 0;
}

// Ques 1(b)

#include <stdio.h>
    int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += *(p + i);
    }
    printf("Sum of all elements in an array: %d", sum);
    return 0;
}

// Ques 2

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 4, b = 5;
    printf("Value of a is %d and b is %d before swap.\n", a, b);
    swap(&a, &b);
    printf("Value of a is %d and b is %d after swap.\n", a, b);

    return 0;
}

// Ques 3

#include <stdio.h>

int length(char *str)
{
    int len = 0;
    while (*str != '\0')
    {
        len += 1;
        str++;
    }
    return len;
}

int main()
{
    char str[] = "HelloSection";
    int len = length(str);
    printf("String: %s\n", str);
    printf("The length of string is: %d", len);
    return 0;
}

// Ques 4

#include <stdio.h>
#include <string.h>

struct Students
{
    int roll_num;
    char name[30];
    char department[30];
    char course[30];
    int year;
};

int main()
{
    struct Students student[10];

    student[0].roll_num = 1001;
    strcpy(student[0].name, "Arin_Jain");
    strcpy(student[0].department, "Computer_Engineering");
    strcpy(student[0].course, "Bachelor_Of_Technology");
    student[0].year = 2022;

    printf("Roll number: %d\n", student[0].roll_num);
    printf("Name: %s\n", student[0].name);
    printf("Department: %s\n", student[0].department);
    printf("Course: %s\n", student[0].course);
    printf("Year of joining: %d\n", student[0].year);

    return 0;
} */

// Ques 5

#include <stdio.h>
#include <string.h>

struct bank
{
    int acc_num;
    char name[20];
    int balance;
};

void check(struct bank customer[])
{
    for (int i = 0; i < 4; i++)
    {
        if (customer[i].balance < 100)
        {
            printf("Account Number: %d\n", customer[i].acc_num);
            printf("Name: %s\n", customer[i].name);
            printf("Balance: %d\n", customer[i].balance);
            printf("\n");
        }
    }
}

int main()
{
    struct bank customer[20];

    customer[0].acc_num = 1001;
    strcpy(customer[0].name, "Arin_Jain");
    customer[0].balance = 150;

    customer[1].acc_num = 1002;
    strcpy(customer[1].name, "Harbhajan_Mishra");
    customer[1].balance = 75;

    customer[2].acc_num = 1003;
    strcpy(customer[2].name, "Hussain_Rokeriya");
    customer[2].balance = 85;

    customer[3].acc_num = 1041;
    strcpy(customer[3].name, "Ayush_Aherwar");
    customer[3].balance = 200;

    printf("Customers with balance below Rs. 100:-\n");
    check(customer);

    return 0;
}