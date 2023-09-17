/* #include <stdio.h>                                       // *
int main()                                                  // **
{                                                           // ***
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                         //   *
int main()                                                 //  **
{                                                          // ***
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i + j >= (a - 1))
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

#include <stdio.h>                                         // ***
int main()                                                 //  **
{                                                          //   *
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if ((j - i) >= 0)
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

#include <stdio.h>                                          // ***
int main()                                                  // **
{                                                           // *
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

#include <stdio.h>                                          //   *
int main()                                                  //  ***
{                                                           // *****
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < (2*a-1); j++)
        {
            if ((a - 1 - i) <= j && j <= (a - 1 + i))  // i + j <= (a - 2) || (j-i) >= a     -----> MY METHOD
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

// USING ONLY FOR LOOP
#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < 2*i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                          // *****
int main()                                                  //  ***
{                                                           //   *
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < (2 * a - 1); j++)
        {
            if (j >= i && (i + j) <= (2 * a - 2))
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

// USING ONLY FOR LOOP
#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < 2 * a - 1 - 2 * i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                         //   *
int main()                                                 //  * *
{                                                          // * * *
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                          // * * *
int main()                                                  //  * *
{                                                           //   *
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                          // ***
int main()                                                  // * *
{                                                           // ***
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == 0 || j == 0 || i == (a - 1) || j == (a - 1))
            {
                printf("* ");
            }
            else
            {
                printf("  "); // DOUBLE SPACE HERE FOR PERFECT SQUARE
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                          // * * *
int main()                                                  // *   *
{                                                           // *   *
    int a;                                                  // *   *
    printf("Enter your number- ");                          // *   *
    scanf("%d", &a);                                        // * * *

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a/2; j++)
        {
            if (i == 0 || j == 0 || i == (a - 1) || j == (a/2 - 1))
            {
                printf("* ");
            }
            else
            {
                printf("  "); // DOUBLE SPACE HERE FOR PERFECT SQUARE
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                          // * * * * * *
int main()                                                  // *         *
{                                                           // * * * * * *
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a/2; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == 0 || j == 0 || i == (a/2 - 1) || j == (a - 1))
            {
                printf("* ");
            }
            else
            {
                printf("  "); // DOUBLE SPACE HERE FOR PERFECT SQUARE
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>              // PYRAMID HILLS (MORE THAN ONE)
int main()
{
    int a, c;
    printf("Enter your number- ");
    scanf("%d", &a);
    printf("How many hills do you want- ");
    scanf("%d", &c);

    for (int i = 0; i < a; i++)
    {
        for (int b = 0; b < c; b++)
        {
            for (int j = 0; j < a - 1 - i; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < i + 1; j++)
            {
                printf("* ");
            }
            for (int j = 0; j < a - 1 - i; j++)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                  // *
int main()                                          // * *
{                                                   // * * *
    int a;                                          // * *
    printf("Enter your number- ");                  // *
    scanf("%d", &a);

    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                  //     *
int main()                                          //   * *
{                                                   // * * *
    int a;                                          //   * *
    printf("Enter your number- ");                  //     *
    scanf("%d", &a);

    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - 1 - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                    // * * *
int main()                                            //  * *
{                                                     //   *
    int a;                                            //  * *
    printf("Enter your number- ");                    // * * *
    scanf("%d", &a);

    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - 1 - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                      // *         *
int main()                                              // * *     * *
{                                                       // * * * * * *
    int a;                                              // * *     * *
    printf("Enter your number- ");                      // *         *
    scanf("%d", &a);

    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < a - 1 - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < a - 1 - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                      //   *
int main()                                              //  * *
{                                                       // * * *
    int a;                                              //  * *
    printf("Enter your number- ");                      //   *
    scanf("%d", &a);

    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - 1 - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                  // * * *
int main()                                          // * *
{                                                   // *
    int a;                                          // * *
    printf("Enter your number- ");                  // * * *
    scanf("%d", &a);

    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                  // * * *
int main()                                          //   * *
{                                                   //     *
    int a;                                          //   * *
    printf("Enter your number- ");                  // * * *
    scanf("%d", &a);

    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - 1 - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                  // * * * * * *
int main()                                          // * *     * *
{                                                   // *         *
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>                                  // *         *
int main()                                          // * *     * *
{                                                   // * * * * * *
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < a - 1 - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < a - 1 - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

#include <stdio.h>                 // * * * * * * *
int main()                         // * * *   * * *
{                                  // * *       * *
    int a;                         // * * *   * * *
    printf("Enter your number- "); // * * * * * * *
    scanf("%d", &a);
    for (int i = 0; i < a * 2 + 1; i++)
        printf("* ");
    printf("\n");
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < 2 * a - 1 - 2 * i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < a * 2 + 1; i++)
        printf("* ");
    printf("\n");
    return 0;
}