#include <stdio.h>
#include <string.h>
struct agency
{
    char name[40];
    char dl[40];
    char route[40];
    char kms[40];
};

int main()
{
    int n;

    printf("\n\n!!!!!     WELCOME TO TRAVEL AGENCY COMPANY     !!!!!\n\n");

    printf("Enter how many drivers you have - ");
    scanf("%d", &n);

    printf("\n");

    struct agency driver[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter name of driver no. %d : ", i+1);
        gets(driver[i].name);
        getchar();

        printf("Enter driving licence of driver no. %d : ", i+1);
        gets(driver[i].dl);
        getchar();

        printf("Enter driving route of driver no. %d : ", i+1);
        gets(driver[i].route);
        getchar();

        printf("Enter how much kms does driver no. %d travelled: ", i+1);
        gets(driver[i].kms);
        getchar();

        printf("\n");
    }

    printf("--------------------HERE IS THE DETAILS OF ALL YOUR DRIVERS --------------------\n\n");

    for(int i=0; i<n; i++)
    {
        printf("Name of driver no %d is %s\n", i+1, driver[i].name);   
        printf("Driving licence of driver no %d is %s\n", i+1, driver[i].dl);   
        printf("Driving route of driver no %d is %s\n", i+1, driver[i].route);   
        printf("Driver no. %d has travelled %s kms till now\n\n", i+1, driver[i].kms);   
    }
    return 0;
}