/* #include <stdio.h>                             // 0000
int main()                                        //  111
{                                                 //   22
    int a;                                        //    3
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if ((j - i) >= 0)
            {
                printf("%d", i);
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

#include <stdio.h>                                  // 1
int main()                                          // 22
{                                                   // 333
    int a;                                          // 4444
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                  // 1
int main()                                          // 12
{                                                   // 123
    int a;                                          // 1234
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                   // 1111
int main()                                           // 222
{                                                    // 33
    int a;                                           // 4
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if ((i + j) <= (a+1))
            {
                printf("%d", i);
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    return 0;
}*/

#include <stdio.h>                                   // 4444
int main()                                           // 333
{                                                    // 22
    int a;                                           // 1
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = a; i >= 1; i--)
    {
        for (int j = a; j >= 1; j--)
        {
            if ((i + j) >= (a+1))
            {
                printf("%d", i);
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