#include <stdio.h>
int reverse(char *arr, int c)
{
    for (int i = 0; i < (c / 2); i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[c - i - 1];
        arr[c - i - 1] = temp;
    }
    return 0;
}

int main()
{
    char arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 9; i++)
    {
        printf("The value of string at index %d is %d\n", i, arr[i]);
    }
    reverse(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        printf("The value of reversed string at index %d is %d\n", i, arr[i]);
    }
    return 0;
}