/*#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter a number-\n");
    scanf("%d", &num);

    do
    {
        printf("%d\t", i);
        i = i + 1;
    } while (i <= num);
    return 0;
}

// MULTIPICATION TABLE
#include <stdio.h>
int main()
{
    int a, b = 1;
    printf("Enter the number-\n");
    scanf("%d", &a);
    printf("\nThe multiplication table of %d is as follow -\n", a);

    do
    {
        printf("%d x %d = %d\n", a, b, a * b);
        b = b + 1;
    } while (b <= 10);
    return 0;
}

// QUICK QUIZ
#include <stdio.h>
int main()
{
    float i = 0;
    do
    {
        printf("%f\n", i + 10);
        i = i + 1;
    } while (i <= 10);
    return 0;
}*/

#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d\n", ++i);
        // i=i+1;
    } while (i < 11);
    return 0;
}