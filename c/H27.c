#include <stdio.h>
int main()
{
    int a = 23;
    int *ptra = &a;
    printf("%d\n", ptra);
    ptra++;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 1);
    // ON ADDING '1', IT ADDS THE SIZE OF INTEGER(BYTES) i.e. 4 AND SO ON..... INT TAKES 4 BYTES

    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("The value of first element of array is %d\n", arr[0]);

    printf("The address of first element of array is %d\n", &arr[0]);
    printf("The address of first element of array is %d\n", arr);               // arr is address here at index 0
    printf("The address of second element of array is %d\n", &arr[1]);
    printf("The address of second element of array is %d\n", arr + 1);

    printf("The value of first element of array is %d\n", *(&arr[0]));
    printf("The value of first element of array is %d\n", *(arr));
    printf("The value of second element of array is %d\n", *(&arr[1]));
    printf("The value of second element of array is %d\n", *(arr + 1));      

    return 0;
}