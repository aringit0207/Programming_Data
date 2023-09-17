/* #include <stdio.h>

int palindrome(int num)
{
    int reversed = 0;
    int org = num;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("The reversed number is %d\n", reversed);

    if (reversed == org)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("Enter your number- ");
    scanf("%d", &num);

    if (palindrome(num))
    {
        printf("This number is a palindrome\n");
    }
    else
    {
        printf("This number is not a palindrome\n");
    }
    return 0;
} */

#include <stdio.h>
#include <string.h>

int main()
{
    char num[10], copy[10], str;

    printf("Enter that you want to reverse- ");
    gets(num);

    strcpy(copy, num);
    strrev(num);
    str=strcmp(copy, num);
    
    if(str==0)
    {
        printf("This is a palindrome.\n");
    }
    else
    {
        printf("This is not a palindrome.\n");
    }
    return 0;
}