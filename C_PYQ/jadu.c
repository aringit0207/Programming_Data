// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[]="APPLZ";
//     for(int i=0; i<strlen(str); i++)
//     {
//         if((str[i]+2)>90)
//         {
//             str[i]+=2;
//             str[i]=str[i]%90+64;
//         }
//         else
//         str[i]=str[i]+2;
//     }
//     printf("%s", str);
//     return 0;
// }

// MAY2019
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int sum = 0, m = n;
//     while (n != 0)
//     {
//         int t = n % 10;
//         sum += t * t * t;
//         n = n / 10;
//     }

//     if (m == sum)
//     {
//         printf("Armstrong!");
//     }
//     else
//     {
//         printf("Not Armstrong!");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int perfectnum(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             sum += i;
//         }
//     }
//     if (n == sum)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     while (1)
//     {
//         if (perfectnum(n))
//         {
//             printf("%d is the perfect number", n);
//             exit(0);
//         }
//         n++;
//     }
//     printf("Not A Perfect Number!");
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a[]={1, 9, 3, 4, 5}, b[]= {6, 7, 8};
    int c[20];
    int a1=0, b1=0, c1;

    for(int i=0; i<4; i++)
    {
        a1 += a[i] + a[i+1];
    }
    for(int i=0; i<4; i++)
    {
        b1 += b[i] + b[i+1];
    }
    c1 = a1 * b1;
    int s=0;
    while(c1!=0)
    {
        c[s]=c1%10;
        c1=c1/10;
        s++;
    }
    for(int i=0; i<(s-1)/2; i++)
    {
        int temp;
        temp = c[i];
        c[i]=c[(s-1)-1-i];
        c[(s-1)-1-i]= temp;
    }
    for(int i=0; i<(s-1); i++)
    {
        printf("%d", c[i]);
    }

    return 0;
}
