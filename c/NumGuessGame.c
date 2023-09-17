// WELCOME TO NUMBER GUESS GAME !!!
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, number, nguesses=1;
    srand(time(NULL)); // srand(time(0));
    number = (rand() % 50) + 1;

    printf("There is a number in my mind(1-50). Can you guess it?\n");

    do
    {
        printf("Enter Your Guess- ");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower number please!\n\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n\n");
        }
        else
        {
            printf("Yeah! You guessed it in %d attempts.", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}