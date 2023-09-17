/* #include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if ((i + j) <= (a - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}