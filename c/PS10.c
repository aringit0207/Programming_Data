// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     FILE *ptr=NULL;
//     ptr=fopen("d.txt", "r");
//     fscanf(ptr, "%d %d %d", &a, &b, &c);
//     printf("The values of a b and c are %d %d %d\n", a, b, c);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x=2, y=1, z=0;
//     switch(x)
//     {
//         case 2:
//         x=4;
//         y=x*1;
//         case 1:
//         x=3;
//         break;
//         default:
//         x=1;
//         y=2;
//     }
//     printf("X = %d, Y = %d, Z = %d", x, y, z);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a=-1, b=1;
    if(++a&&b++)
    {0
        printf("%d%d", a, b);
    }
    else{
        printf("a=%d, b=%d", a, b);
    }
    return 0;
}