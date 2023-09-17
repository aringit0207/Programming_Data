/* // QUES 2(d)
#include <stdio.h>
#define NUM_PRIME 10000
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
void print_prime_factorization(int n);
int main()
{
    int n;
    scanf("%d", &n);
    print_prime_factorization(n);
    return 0;
}

void print_prime_factorization(int n)
{

    for (int i = 0; i < 15; i++)
    {
        int a = primes[i], count = 0;
        if (n % a == 0)
        {
            while (n % a == 0)
            {
                count++;
                n = n / a;
            }
        }
        if (n == 1)
        {
            printf("%d**%d", a, count);
            break;
        }
        printf("%d**%d*", a, count);
    }
}

// QUES 3(b)
#include <stdio.h>
int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag++;
            }
        }
        if (flag == 2)
        {
            sum += arr[i];
        }
    }
    printf("%d", sum);
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum(arr, n);

    return 0;
}

// QUES 3(c)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int diff;
        diff = arr[i + 1] - arr[i];
        if (diff < 0)
            diff = -diff;
        if (diff > max)
            max = diff;
        else
        {
            printf("False");
            exit(0);
        }
    }
    printf("True");
    return 0;
} */

// QUES 3(d)
