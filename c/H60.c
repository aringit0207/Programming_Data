#include <stdio.h>
int main()
{
    printf("File name is %s\n", __FILE__);
    printf("Current date is %s\n", __DATE__);
    printf("Current time is %s\n", __TIME__);
    printf("Line no is %d\n", __LINE__);
    printf("ANSI: %d", __STDC__);
    return 0;
}