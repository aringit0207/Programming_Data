// QUESTION 1
/*#include <stdio.h>
int main ()
{
    int a = 10;
    if (a=11) {
        printf("I am 11");}
            else {
            printf("I am not 11");
        }

    return 0;
}

// QUESTION 2
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Your Physics Marks out of 100 -\n");
    scanf("%d", &a);
    printf("Enter Your Chemistry Marks out of 100 -\n");
    scanf("%d", &b);
    printf("Enter Your Maths Marks out of 100 -\n");
    scanf("%d", &c);

    if (a+b+c>=120&&a>=33&&b>=33&&c>=33) {
        printf("Bravo! You have passed.");
    }
    else {
        printf("Better luck next time!");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    float a;
    printf("Enter your income below in LPA -\n");
    scanf("%f", &a);

    if (2.5<=a<5){
        printf("You have to pay 5 percent tax.");
    }
    else if (5<=a<10){
        printf("You have to pay 20 percent tax.");
    }
    else if (10<=a){
        printf("You have to pay 30 percent tax.");
    }
    else {
        printf("You don't have to pay any tax.");
    }
    return 0;
}

// QUESTION 4
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the year below -\n");
    scanf("%d", &a);

    if (a%4==0) {
        printf("This year is a leap year.");
    }
    else {
        printf("This year is not the leap year.");
    }
    return 0;
}

//QUESTION 5
#include <stdio.h>
int main()
{
    char a;
    printf("Enter the character-\n");
    scanf("%c", &a);

    if ('a'<=a && a<='z') {
        printf("The letter is lower case.");
    }
    else if ('A'<=a && a<='Z') {
        printf("The letter is not lower case.");
    }
    else {
        printf("Non alphabetic letter.");
    }
    return 0;
}*/

// QUESTION 6
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Write four digits below-\n");
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is greatest.", a);
            }
            else
            {
                printf("%d is greatest.", d);
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("%d is greatest.", b);
        }
        else
        {
            printf("%d is greatest.", d);
        }
    }
    else if (c > d)
    {
        printf("%d is greatest.", c);
    }
    else
    {
        printf("%d is greatest.", d);
    }
    return 0;
}