/* // FILE READING AND WRITING
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;

    // char str2[50];
    // char str[50] = "Arin_Jain";
    // ptr = fopen("d.txt", "r+");
    // fscanf(ptr, "%s", str2);
    // printf("%s", str2);
    // fprintf(ptr, "%s", str);

    char str[50] = "_Everyone";
    ptr = fopen("d.txt", "a");
    fprintf(ptr, "%s", str);
    fclose(ptr);
    fprintf(ptr, "%s", str);
    return 0;
} */

// FPUTC FPUTS FGETC FGETS
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;

    // ptr=fopen("a.txt", "w");
    // fputc('a', ptr);
    // fputs("Hello Everyone", ptr);

    ptr=fopen("a.txt", "r");
    char c;
    c=fgetc(ptr);
    printf("%c\n", c);
    
    char str[10];
    fgets(str, 6, ptr);
    printf("%s\n", str);

    fclose(ptr);
    return 0;
}