/*// BREAK STATEMENT
#include<stdio.h>
int main()
{
    int i, age;
    for (i=0; i<15; i++){
        printf("%d\nEnter Your Age\n", i);
        scanf("%d", &age);
        if (age>15)
        {
            break;
        }
        if (age==13){
            break;
        }
    }
    return 0;
}*/

// CONTINUE STATEMENT
#include<stdio.h>
int main()
{
    int i, age;
    for (i=0; i<15; i++){
        printf("%d\nEnter Your Age\n", i);
        scanf("%d", &age);
        if (age>10) {
            continue;
        }
        printf("Arin is a good boy.\n");
        printf("Arin is a good boy.\n");
        printf("Arin is a good boy.\n");
        printf("Arin is a good boy.\n");
        printf("Arin is a good boy.\n");
    }
    return 0;
}