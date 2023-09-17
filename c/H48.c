#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;

    printf("For employee 1:\n");
    printf("Enter no. of characters in your eID- ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("Enter your employee eID- ");
    scanf("%s", ptr);
    printf("Employee eID of employee 1 is: %s\n", ptr);

    for (int i = 0; i < 2; i++)
    {
        printf("\nFor employee %d:\n", i + 2);
        printf("Enter no. of characters in your eID- ");
        scanf("%d", &n);

        ptr = (int *)realloc(ptr, n * sizeof(int));

        printf("Enter your employee eID- ");
        scanf("%s", ptr);
        printf("Employee eID of employee %d is: %s\n", i + 2, ptr);
    }

    return 0;
}