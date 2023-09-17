// BY DECLARING ARRAY AS A PARAMETER IN THE FUNCTION

/* #include <stdio.h>
int func(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at index %d  is %d\n", i, array[i]);
    }
    array[0] = 3234; // VERY IMPORTANT HERE THAT IF YOU CHANGE ANY VALUE HERE, IT GETS REFLECTED IN main()
    return 0;
}

int main()
{
    int arr[] = {23, 34, 45, 56, 78};
    printf("The value at index 0 is %d\n", arr[0]);
    func(arr);
    printf("The value at index 0 is %d\n", arr[0]);
    return 0;
}

// BY DECLARING ARRAY'S BASE ADDRESS TO THE FUNCTION

#include <stdio.h>
int func(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at index %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 23432; // VERY IMPORTANT HERE THAT IF YOU CHANGE ANY VALUE HERE, IT GETS REFLECTED IN main()
    return 0;
}

int main()
{
    int arr[] = {23, 34, 45, 56, 78};
    func(arr);
    printf("\n");
    func(arr);
    return 0;
}
// 2-D ARRAY

#include <stdio.h>
int func(int arr[2][5])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("The value at index %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}

int main() 
{
    int arr[2][5] = {{23, 34, 45, 56, 78}, {1, 2, 3, 4, 5}};
    func(arr);
    return 0;
} */

// QUICK QUIZ
#include <stdio.h>
int display(int arr[3][4], int x, int y) 
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("The value at index %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
    printf("\n");
    return 0;
}

int main()
{
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the value at index %d, %d is ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    display(arr, 3, 4);
    return 0;
}