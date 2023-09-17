// 1-D ARRAY

/* #include <stdio.h>
int main()
{
    int marks[3];
    marks[0] = 34;
    marks[1] = 56;
    marks[2] = 78;
    printf("The marks of 2nd student is %d", marks[1]);
    return 0;
}

#include <stdio.h>
int main()
{
    int array[5];
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the %d value of array- ", i);
        scanf("%d", &array[i]);
    }
    printf("\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("The value of %d element of array is %d\n", i, array[i]);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int array[3] = {43, 34, 54};
    for (int i = 0; i <  3; i++)
    {
        printf("The value of %d element of array is %d\n", i, array[i]);
    }
    return 0;
} */

// 2-D ARRAY

#include <stdio.h>
int main()
{
    int array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 0, 1, 2}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d, %d element of array is %d\n", i, j, array[i][j]);
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0; 
}