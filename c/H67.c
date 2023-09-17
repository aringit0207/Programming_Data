/* #include <stdio.h>

int main()
{
    FILE *ptr = NULL;

    // ptr = fopen("d.txt", "r");

    // char c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c);

    // char str[5];
    // fgets(str, 26, ptr);
    // printf("The string is %s", str);

    ptr=fopen("d.txt", "w");

    fputc('A', ptr);
    fputs(" This is Arin Jain.", ptr);

    fclose(ptr);
    return 0;
} */

#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("d.txt", "r+");
    // ptr = fopen("d.txt", "w+");
    ptr = fopen("d.txt", "a+");

    fputs("This is Arin Jain. ", ptr);
    return 0;
}