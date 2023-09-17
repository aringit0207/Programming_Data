#include <stdio.h>
int main()
{
    int age, marks;
    printf("Enter Your Age-\n");
    scanf("%d", &age);

    printf("Enter Your Marks-\n");
    scanf("%d", &marks);
|

    switch (age) {
        case 5:
        printf("Your age is 5.\n");
        switch (marks)
        {
        case 45:
            printf("Your marks is 45.");
            break;
        
        default:
            printf("Your marks is not 45.");
        }
        break;

         case 18:
        printf("Your age is 18.");
        break;

         case 25:
        printf("Your age is 25.");
        break;

        default:
        printf("The age is not 5, 18 and 25.");
    }
    return 0;
}