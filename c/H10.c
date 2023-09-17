// IF ELSE
/*#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age below -\n");
    scanf("%d", &age);
    printf("You have entered %d as your age.\n", age);

    if (age>=18) {
        printf("You can vote!");
    }
    else {
        printf("You cannot vote!");
    }
    return 0;
}

// IF ELSE IF
#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age -\n");
    scanf("%d", &age);
    printf("You have entered %d as your age.\n", age);

    if (age>=60) {
        printf("You are old.");
    }
    else if (age>=40) {
        printf("You are man.");
    }
    else if (age>=18) {
        printf("You are young.");
    }
    else if (age>=10) {
        printf("You are teenager.");
    }
    else if (age>=1) {
        printf("You are baby.");
    }
    else {
        printf("Get the fuck out of your Mummy's belly.");
    }
    return 0;
}

// PRACTICE QUESTION

#include <stdio.h>
int  main()
{
    int a;
    printf("Type 1, 2, 3 respectively if you have passed in both Maths and Science or Science or Maths\n");
    scanf("%d", &a);

    if (a==1){
        printf("Your gift is 45 rupees.");
    }
    else if (a==2){
        printf("Your gift is 15 rupees.");
    }
    else if (a==3) {
        printf("Your gift is 15 rupees.");
    }
    return 0;
}*/

// ANOTHER METHOD (BY USING '||' IN 2 & 3)

#include <stdio.h>
int  main()
{
    int a;
    printf("Type 1, 2, 3 respectively if you have passed in both Maths and Science or Science or Maths\n");
    scanf("%d", &a);

    if (a==1){
        printf("Your gift is 45 rupees.");
    }
    else if (a==2||a==3){
        printf("Your gift is 15 rupees.");
    }
    return 0;
}