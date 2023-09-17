#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a, b, sum;
    a = 43;
    b = 546;
    sum = a + b;
    return sum;
}

int main()
{
    // CASE 1: DE ALLOCATION OF A MEMORY BLOCK

    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 75;
    ptr[2] = 31;
    ptr[3] = 65;
    free(ptr); // ptr IS NOW A DANGLING POINTER
    
    
    
    
    // CASE 2: FUNCTION RETURNING LOCAL VARIABLE ADDRESS

    int *dangPtr = functionDangling(); // dangPtr IS NOW A DANGLING POINTER

    
    
    
    
    // CASE 3: IF A VARIABLE GOES OUT OF SCOPE

    int *danglingPtr3;

    { // SCOPE STARTS HERE

        int a = 43;
        danglingPtr3 = &a;

    } // SCOPE ENDS HERE

    // HERE VARIABLE 'a' GOES OUT OF SCOPE WHICH MEANS danglingPtr3 IS POINTING TO A LOCATION WHICH IS FREED AND HENCE 
    // danglingPtr3 IS NOW A DANGLING POINTER
    
    return 0;
}