#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // printf("%d to %d", 0, RAND_MAX); // GIVE THE VALUE BETWEEN 0 TO 32767(MAX)
    // srand(100); // GENERATES DIFFERENT SEQUENCE OF RANDOM NUMBER BUT IT GIVES SAME RANDOM NUMBER FOR EVERY RUN.
    
    srand(time(NULL));    
    printf("%d\n", rand()); // GENERATES A RANDOM INTEGER
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());
    return 0;
}