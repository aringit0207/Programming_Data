// QUESTION 2
/* #include <stdio.h>

int main()
{
    char st1[20];
    char st2[20];
    char c;
    int i=0;

    printf("Enter the value of first string-\n");
    scanf("%s", st1);

    printf("Enter the value of second string character by character-\n");

    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i]=c;
        i++;
    }

    st2[i]='\0';

    printf("The value of first string is %s\n", st1);
    printf("The value of second string is %s\n", st2);

    return 0;
}

// QUESTION 3
#include <stdio.h>
#include <string.h>

int length(char *st)
{
    char *ptr = st;
    char len = 0;

    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char str[] = {'A', 'R', 'I', 'N'};
    int l = length(str);
    printf("The length of the string is %d", l);
    return 0;
}

// QUESTION 4
#include <stdio.h>

void slice(char *str, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        str[i] = str[m + i];
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char st[] = "Arin";
    slice(st, 1, 3);
    printf("%s", st);
    return 0;
}

// QUESTION 5
#include <stdio.h>
#include <string.h>

int copy(char *str1, char *str2, char *str3)
{
    strcpy(str3, strcat(str1, str2));
}

int main()
{
    char s1[]="Arin";
    char s2[]="Jain";
    char s3[40];

    copy(s1, s2, s3);
    puts(s3);

    return 0;
}

// QUESTION 6
#include <stdio.h>
void encrypted(char *st)
{
    char *ptr = st;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char str[] = "Om Namo Arihantanam : Om Namo Siddhanam : Om Namo Ayariyanam : Om Namo Uvajjhayanam : Om Namo Loy Savvsahunam";
    encrypted(str);
    puts(str);
    return 0;
}

// QUESTION 7
#include <stdio.h>
void encrypted(char *st)
{
    char *ptr = st;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char str[] = "Pn!Obnp!Bsjiboubobn!;!Pn!Obnp!Tjeeibobn!;!Pn!Obnp!Bzbsjzbobn!;!Pn!Obnp!Vwbkkibzbobn!;!Pn!Obnp!Mpz!Tbwwtbivobn";
    encrypted(str);
    puts(str);
    return 0;
}

// QUESTION 8
#include <stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char str[] = "Vartman ko Vardhmaan ki avasyakta hai";
    int c = occurence(str, 'a');

    printf("Occurence of 'a' is %d", c);
    return 0;
} */

// QUESTION 9
#include <stdio.h>
int check(char *str, char c)
{
    while (*str != '\0')
    {
        if (c == *str)
        {
            return 1;
        }
        str++;
    }
    return 0;
}

int main()
{
    char str[] = "Jayatu Jainam Shasanam";
    char c;
    puts(str);
    printf("Enter your character - ");
    scanf("%c", &c);
    check(str, c);
    if (check(str, c))
    {
        printf("Yeah! You found it.");
    }
    else
    {
        printf(":(");
    }
    return 0;
}