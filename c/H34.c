/* #include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]); // %c IS USED FOR PRINTING CHARACTER BY CHARACTER
        i++;
    }
}

int main()
{
    // char str[] = {'a', 'r', 'i', 'n', '\0'};
    char str[] = "arin";

    printstr(str); // FUNCTION CALLING

    return 0;
} 

// STRING INPUT CHARACTER BY CHARACTER
#include <stdio.h>
int main()
{
    char str[5];
    // scanf("%s", str);
    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &str[i]);
        getchar();
    }
    printf("%s", str);
    return 0;
} */

#include <stdio.h>
int main()
{
    char str[50];

    // char s1[] = "Arin Jain";
    // s1 = "From Ambah"; // WE CANNOT REINTIALIZE WITH ARRAY


    char *s1 = "Arin Jain";
    s1 = "From Ambah"; // WE CAN REINTIALIZE ONLY WITH THE HELP OF POINTER

    gets(str); // USER INPUT
    // puts(str); // USING PUTS

    // scanf("%s", str);    // USER INPUT           // BUT IT CANT BE USED TO INPUT MULTI-WORD STRING WITH SPACES
    printf("%s\n", str); // USING PRINTF         // %s IS USED FOR PRINTING A STRING (A SEQUENCE OF CHARACTERS)

    // puts(s1);

    return 0; 
}