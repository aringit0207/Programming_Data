// #include <stdio.h>
// int main()
// {
//     for(int i=0; i<5; i++)
//     {
//         int a=1;
//         int b=5;
//         printf("%d\n", a*b);
//         a++;
//         b++;
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h.>
// int main()
// {
//     char str[] = "ar in";
//     int len = strlen(str);
//     for (int i = 0; i < len; i++)
//     {
//         if (str[i] == ' ')
//         {
//             int j;
//             for (j = i + 1; j < len; j++)
//             {
//                 str[j - 1] = str[j];
//             }
//             str[j - 1] = '\0';
//         }
//     }
//     printf("%s", str);
//     return 0;
// }

#include <stdio.h>
int main()
{
    printf("%d", sizeof(long));
    return 0;
}