#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc);
    // write in terminal -> .\H68.exe Arin Jain
    // if we give no arguments, the value of argc is 1 because it counts file name as first argument

    for(int i=0; i<argc; i++)
    {
        printf("This argument at index no %d has a value of %s\n", i, argv[i]);
    }
    return 0;
}
