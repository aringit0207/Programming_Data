// READING A FILE

/* #include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char str[40];
    ptr = fopen("d.txt", "r");
    fscanf(ptr, "%s", str);
    printf("The content of this file is- %s\n", str);

    fclose(fptr);

    return 0;
} */

// WRITING A FILE
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char str[40]="Hello guys I'm Arin Jain. ";
    // ptr = fopen("d.txt", "w");
    ptr = fopen("d.txt", "a"); // APPEND MODE
    fprintf(ptr, "%s", str); 

    return 0;
}