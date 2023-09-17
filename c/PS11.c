// QUESTION 1

/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr=(int*)malloc(6*sizeof(int));

    for(int i=0; i<6; i++)
    {
        printf("Enter your integer- ");
        scanf("%d", &ptr[i]);
    }
    printf("\nYour required integers-\n");
    for(int i=0; i<6; i++)
    {
        printf("%d", ptr[i]);
        printf("\n");
    }
    return 0;
} 

// QUESTION 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How many integers do you want- ");
    scanf("%d", &n);

    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
    {
        printf("Enter your integer- ");
        scanf("%d", &ptr[i]);
    }
    printf("\nYour required integers-\n");
    for(int i=0; i<n; i++)
    {
        printf("%d", ptr[i]);
        printf("\n");
    }
    return 0;
} 

// QUESTION 3

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr=(int*)calloc(6, sizeof(int));

    for(int i=0; i<6; i++)
    {
        printf("Enter your integer- ");
        scanf("%d", &ptr[i]);
    }
    printf("\nYour required integers-\n");
    for(int i=0; i<6; i++)
    {
        printf("%d", ptr[i]);
        printf("\n");
    }
    return 0;
} 

// QUESTION 4

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    ptr=(int*)calloc(5, sizeof(int));

    for(int i=0; i<5; i++)
    {
        printf("Enter your integer- ");
        scanf("%d", &ptr[i]);
    }
    printf("\nYour required integers-\n");
    for(int i=0; i<5; i++)
    {
        printf("%d", ptr[i]);
        printf("\n");
    }

    printf("\nEnter new no.s of integers- ");
    scanf("%d", &n);

    ptr=(int*)realloc(ptr, n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("Enter your integer- ");
        scanf("%d", &ptr[i]);
    }
    printf("\nYour required integers-\n");
    for(int i=0; i<n; i++)
    {
        printf("%d", ptr[i]);
        printf("\n");
    }
    return 0;
} */

// QUESTION 5

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number whose multiplication table you want- ");
    scanf("%d", &n);

    int *ptr;
    ptr=(int*)malloc(10*sizeof(int));

    printf("\n");

    for(int i=0; i<10; i++)
    {
        ptr[i]=n*(i+1);
    }

    printf("The multiplication table of %d up to 10 terms is:\n", n);
    for(int i=0; i<10; i++)
    {
        printf("%d\n", ptr[i]);
    }

    ptr=(int*)realloc(ptr, 15*sizeof(int));
    for(int i=0; i<15; i++)
    {
        ptr[i]=n*(i+1);
    }

    printf("\n");
    printf("The new multiplication table of %d  up to 15 terms is:\n", n);
    for(int i=0; i<15; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}