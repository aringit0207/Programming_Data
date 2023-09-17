#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char name[10];
    int input, countI = 0, countC = 0;
    srand(time(NULL));
    int random = (rand() % 3) + 1;

    printf("\n                                      WELCOME TO ROCK PAPER SCISSOR GAME\n");
    printf("                                      ..................................\n\n");
    printf("Write your name- ");
    gets(name);

    for (int i = 1; i <= 3; i++)
    {
        printf("\nChoose the corresponding number below-\nROCK     ----> 1\nPAPER    ----> 2\nSCISSOR  ----> 3\n");
        printf("\nYOUR CHOICE - ");
        scanf("%d", &input);

        if ((input == 1 && random == 3) || (input == 2 && random == 1) || (input == 3 && random == 2))
        {
            printf("COMPUTER CHOOSE %d. %s GOT A POINT :)\n", random, name);
            countI++;
        }
        else if ((input == 1 && random == 2) || (input == 2 && random == 3) || (input == 3 && random == 1))
        {
            printf("COMPUTER CHOOSE %d. COMPUTER GOT A POINT :(\n", random);
            countC++;
        }
        else if (input == random)
        {
            printf("COMPUTER CHOOSE %d. TIE :|", random);
        }
        printf("\n");
    }

    printf("\nYOURS POINTS - %d\nCOMPUTER POINTS - %d\n\n", countI, countC);
    if (countI > countC)
    {
        printf("HURRAY !!! %s WON....\n\n", name);
    }
    else if (countI < countC)
    {
        printf("SO SORRY !!!\n\n");
    }
    else
    {
        printf("IT'S A TIEEEEEE\n\n");
    }

    return 0;
}