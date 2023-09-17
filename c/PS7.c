// QUESTION 1
/* #include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    printf("The value of third element of array is %d\n",*(arr+2));
    printf("The value of first element of array is %d\n",*(arr));
    return 0;
}

// QUESTION 3
#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i]=5*(i+1);
    }

    for (int i=0; i<10; i++){
        printf("5 X %d = %d\n", i+1, arr[i]);
    }
    return 0;
}

// QUESTION 4
#include <stdio.h>
int main()
{
    int arr[10];
    int a;
    printf("Enter your num- ");
    scanf("%d", &a);
    for(int i=0; i<10; i++)
    {
        arr[i]= a*(i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", a, i + 1, arr[i]);
    }
    return 0;
}

// QUESTION 5
#include <stdio.h>
void reverse(int *array, int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        int temp;
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {34, 56, 86, 23, 93};
    for (int i = 0; i < 5; i++)
    {
        printf("The value of array at %d is = %d", i, arr[i]);
        printf("\n");
    }
    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("The value of array in reverse at %d is = %d", i, arr[i]);
        printf("\n");
    }
    return 0;
}

// QUESTION 6
#include <stdio.h>
int positiveint(int arr[])
{
    int posint=0;
    for (int i=0; i<6; i++)
    {
        if (arr[i]>=0)
        {
        posint++;
        }
    }
            printf("Total positive integers is %d\n", posint);
    return 0;
}

int main()
{
    int arr[]={2,4,-5,-3,-7,-9};

    positiveint(arr);
    return 0;
}

// QUESTION 7
#include <stdio.h>
int table(int *arr, int n, int num)
{
    printf("The multiplication table of %d is:\n", num);
    for(int i=0; i<n; i++)
    {
        printf("%d x %d = %d\n", num, i+1, num*(i+1));
    }
    printf("\n");
    return 0;
}

int main()
{
    int arr[3][10];
    table(arr[0], 10, 2);
    table(arr[1], 10, 7);
    table(arr[2], 10, 9);
    return 0;
}

// QUESTION 8
#include <stdio.h>
int table(int *arr, int n, int num)
{
    printf("The multiplication table of %d is:\n", num);
    for(int i=0; i<n; i++)
    {
        printf("%d x %d = %d\n", num, i+1, num*(i+1));
    }
    printf("\n");
    return 0;
}

int main()
{   int n;
printf("Enter your number- ");
scanf("%d", &n);
    int arr[3][10];
    table(arr[0], 10, n);
    return 0;
} */

// QUESTION 9
#include <stdio.h>
int main()
{
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("The address of arr[%d][%d[%d] is %u\n", i, j, k, &arr[i][j][k]);
            }
        }
    }
    return 0;
}