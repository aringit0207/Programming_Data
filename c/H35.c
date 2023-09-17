#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Arin";
    char s2[] = "Jain";
    char s3[40]; 

    // puts(strcat(s1, s2));
    
    printf("The length of s1 is %d\n", strlen(s1));
    printf("The length of s2 is %d\n", strlen(s2));
    
    // puts(strrev(s1));
    // puts(strrev(s2));

    strcpy(s3, s1);
    // strcpy(s3, strcat(s1, s2));
    puts(s3);
 
    printf("The strcmp for s1, s2 returned %d ", strcmp(s1, s2));

    return 0;
} 

/*#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];
    char str3[]=" is a friend of ";
    char str4[20];

    printf("Enter the name of first friend: ");
    gets(str1);
    
    printf("Enter the name of second friend: ");
    gets(str2);

    printf("\nThe required string is:\n");
    
    strcpy(str4, strcat(str3, str2));
    puts(strcat(str1, str4));

    return 0;
}*/