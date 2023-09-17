// #include <stdio.h>

// int main()
// {
//     int a,b;
    
//     // a=34;
//     // b=9;
//     a = 0;
//     b = 1;
    
//     printf("a + b = %d\n", a + b);
//     printf("a - b = %d\n", a - b);
//     printf("a * b = %d\n", a * b);
//     printf("a / b = %d\n", a / b);
//     printf("a / b = %d\n", a == b);  // if a=b then it will give some value
//     printf("a && b = %d\n", a&&b);   // Both values must be true. Then it will return true.
//                                         0 is 0 and all other values will be treated as 1.   
//     printf("a || b = %d\n", a||b);   // Atleast one value must be true. Then it will return true.
//        printf("!a = %d\n", !a); // if a is any integer except 0 then it will return 0.
//        printf("!b = %d\n", !b); 
    
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a, b;
    a = 2;
    b = 3;
            // 0-00, 1-01, 2-10, 3-11
    printf("a & b = %d", a&b);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//    int a;
//    printf("Enter your number:\n");
//    scanf("%d", &a);

//    printf("Your Multiplication Table of %d is as follows:\n", a);
//    printf("%d x 1 = %d\n", a, a*1);
//    printf("%d x 2 = %d\n", a, a*2);
//    printf("%d x 3 = %d\n", a, a*3);
//    printf("%d x 4 = %d\n", a, a*4);
//    printf("%d x 5 = %d\n", a, a*5);
    
//     return 0;
// }