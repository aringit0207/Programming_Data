// QUESTION 1
/* #include <stdio.h>
struct vector
    {
        int x;
        int y;
    };

int main()
{
    struct vector v1, v2;
    v1.x=43;
    v1.y=23;

    v2.x=53;
    v2.y=65;

    printf("For v1, x dim is %d y dim is %d\n", v1.x, v1.y);
    printf("For v2, x dim is %d y dim is %d\n", v2.x, v2.y);
    return 0;
}

// QUESTION 2

#include <stdio.h>
struct var
{
    int x;
    int y;
};

struct var sumVector(struct var a1, struct var a2)
{
    struct var result;
    result.x=a1.x+a1.y;
    result.y=a2.x+a2.y;
    return result;
}

int main()
{
    struct var v1, v2, sum;
    v1.x=3;
    v1.y=5;
    v2.x=4;
    v2.y=6;
    sum=sumVector(v1, v2);
    printf("%d %d", sum.x, sum.y);
    return 0;
}

// QUESTION 4

#include <stdio.h>
struct var
{
    int a;
    int b;
};

int main()
{
    struct var arin;
    struct var *ptr;
    ptr=&arin;
    ptr->a=32;
    ptr->b=24;
    printf("%d\n", ptr->a);
    printf("%d\n", ptr->b);
    return 0;
}

// QUESTION 5

#include <stdio.h>
struct complex
{
    int x;
    int y;
};

int main()
{
    struct complex arin;
    arin.x=3;
    arin.y=4;

    printf("Real & Imaginary part of a complex number are %d and %d", arin.x, arin.y);
    return 0;
}  

// QUESTION 6

#include <stdio.h>
struct complex
{
    int x;
    int y;
};

int display(struct complex c)
{
    printf("Real & Imaginary part of a complex number are %d and %d\n", c.x, c.y);
}

int main()
{
    struct complex arin[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arin[i].x);
    }
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arin[i].y);
    }

    for (int i = 0; i < 5; i++)
    {
        display(arin[i]);
    }

    return 0;
} 

// QUESTION 7

#include <stdio.h>
typedef struct complex
{
    int x;
    int y;
}a1;

int main()
{
    a1 arin;
    arin.x = 3;
    arin.y = 4;

    printf("Real & Imaginary part of a complex number are %d and %d", arin.x, arin.y);
    return 0;
} 

// QUESTION 8

#include <stdio.h>
#include <string.h>

struct account
{
    int no;
    char name[50];
    int mob;
};

int main()
{
    struct account bank[10];

    bank[0].no=1;
    strcpy(bank[0].name, "Arin Jain");
    bank[0].mob=4354;

    bank[1].no=2;
    strcpy(bank[1].name, "Ayush Aherwar");
    bank[1].mob=4354;

    bank[2].no=3;
    strcpy(bank[2].name, "Harbhajan Mishra");
    bank[2].mob=4354;

    printf("Serial no of first customer: %d\n", bank[0].no);
    printf("Name of second customer: %s\n", bank[1].name);
    printf("Mob of third customer: %d\n", bank[2].mob);

    return 0;
} 

// QUESTION 9

#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
}a;

int call(a b)
{
    printf("Date is %d/%d/%d", b.date, b.month, b.year);
}

int main()
{
    a arin={07, 04, 2023};
    call(arin);
    return 0;
} */

// QUESTION 10

#include <stdio.h>
typedef struct time
{
    int hour;
    int minute;
    int second;
}t;

int main()
{
    t samay={3,34,46};
    printf("Current time is %d:%d:%d", samay.hour, samay.minute, samay.second);
    return 0;
}