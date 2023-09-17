/*#include <stdio.h>

int main()
{
    int a;
    printf("%lu", sizeof(char));
    printf("%d", 45+33);
    scanf("%d", &a);
    printf("%d", a);
    printf("Ahimsa Parmo Dharma\n");
    return 0;
}

#include <stdio.h>

int main()

{
int num ;
printf("Write Your Number:\n");
scanf("%d", &num);

printf("Multiplication of %d is:\n", num);
printf("%d x 1 = %d\n", num, num*1);
printf("%d x 2 = %d\n", num, num*2);
printf("%d x 3 = %d\n", num, num*3);
printf("%d x 4 = %d\n", num, num*4);
printf("%d x 5 = %d\n", num, num*5);
return 0;
}

#include<stdio.h>
int main()
{
    int a,b;

    printf("enter number a\n");
    scanf("%d", &a);

     printf("enter number b\n");
    scanf("%d", &b);

    printf("The sum is %d\n", a+b);
    return 0;
}

#include <stdio.h>
void display();

int main()
{
    display();
    return 0;
}

void display() {
    printf("Hi I am display.");
}

// STAR PATTERN
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number - ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int factorial(int n);
int main() {
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a ,factorial(a));
    return 0;
}
int factorial(int n) {
    if (n==0||n==1) {
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

#include <stdio.h>
int main() {
    int a, f=1;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i=1; i<=a; i++) {
        f *= i;

    }
     printf("The factorial of %d is %d", a, f);
      return 0;
}

// FIBONACCI BY ITERATION
#include <stdio.h>
int main()
{
    int t, a = 1, b = 0, c;
    printf("Enter the element- ");
    scanf("%d", &t);
    printf("The %dth element of FIBONACCI Series is ", t);

    for (int i = 0; i < t; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d", a);
    return 0;
}

// STAR PATTERN

#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if ((i + j) >= (a - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == 0 || j == 0 || i == (a - 1) || j == (a - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < (2 * a - 1); j++)
        {
            if (j >= i && (i + j) <= (2 * a - 2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main() 
{
    int a;
    printf("Enter the number- ");
    scanf("%d", &a);
    
    for (int j=0; j<2*a-1;) {
        printf("%d", a);
    }
    
    return 0;
} 

#include <stdio.h>
int func(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at index %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 23432; // VERY IMPORTANT HERE THAT IF YOU CHANGE ANY VALUE HERE, IT GETS REFLECTED IN main()
    return 0;
}

int main()
{
    int arr[] = {23, 34, 45, 56, 78};
    func(arr);
    printf("\n");
    func(arr);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<i+1; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     if(n%3==0)
//     {
//         printf("Distributed successfully!!!");
//     }
//     else{
//         printf("There will be a fight between the three friends");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()

// {

//     int n;
//     scanf("%d", &n);
//     int arr[2*n-1][2*n-1];

//     // initialize all the array with n
//     // then replace everything except for the outer ring with n - 1 ...
//     // until reaching 1
//     for (int j = 0; j < n; j++){
//         for (int i = j; i <= 2*n - 2 - j; i++){
//             for (int k = j; k <= 2*n - 2 - j; k++){
//                 arr[i][k] = n - j;
//             }
//         }
//     }

//     // print the array
//     for (int i = 0; i < 2*n - 1; i++){
//         for (int j = 0; j < 2*n -1; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a;
//     char str[]= {'a', 'e', 'i', 'o', 'u'};
//     printf("Enter your character: ");
//     scanf("%c", &a);

//     for(int i=0; i<5; i++)
//     {
//         if(a==str[i])
//         {
//             printf("Vowel");
//             break;
//         }
//         else
//         {
//             printf("Consonent");
//         }
//         break;
//     }

//     return 0;
// }

/* #include <stdio.h>
int main()
{
    int n, a;
    printf("Enter your number up to you want cube of : ");
    scanf("%d", &n);

    printf("The cube of integer upto %d is :\n", n);
    for (int i = 1; i <= n; i++)
    {
        a = i * i * i;
        printf("The cube of %d is %d\n", i, a);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int a=1, b=0, c, n;
    printf("Enter the nth term up to you want fibonacci series: ");
    scanf("%d", &n);

    printf("The fibonacci series is :\n");

    for(int i=0; i<n; i++)
    {
        c=a+b;
        a=b;
        b=c;

        printf("%d ", a);
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int x, y;

    printf("Enter how much kilometers are remaining: ");
    scanf("%d", &y);
     printf("Enter how much litres are remaining: ");
    scanf("%d", &x);

    if(y>(x*5))
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
} 

#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < 5; i++)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("%d", sum);

    return 0;
} 
#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    scanf("%d", &n);
    char str[6];

    for(int i=0; i<6; i++)
    {
        sum= sum+(str[i]-48);
    }
    printf("%d", sum);
    return 0;
} 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int sum=0;
    scanf("%d", &n);
    int str[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &str[i]);
    }

    for(int i=0; i<n; i++)
    {
        sum= sum+(str[i]);
    }
    printf("%d", sum);
    return 0;
}   


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char str[][20]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine","Greater than 9"};
    scanf("%d", &n);
    if(n>9){
        printf("Greater than 9");
        return 0;
    }
    printf("%s",str[n-1]);
    return 0;
} 

#include <stdio.h>
int main()
{
    int sum=0;
    // int n;
    // scanf("%d", &n);

    int arr[]={1, 2, 3, 4, 5};

    for(int i=0; i<5; i++)
    {
        
        sum=sum+arr[i];
    }
    printf("%d", sum);
    return 0;
} 

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    for(int i=0; i<n; i++)
    {
    scanf("%s", &str[i]);
    }

    int count=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='a')
        {
            count++;
        }
    }
    printf("'a' occurs %d times", count);
    return 0;
} 

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int size=2*n-1;
    int start=0, end=size-1;
    int arr[size][size];
    
    while(n!=0)
    {
        for(int i=start; i<=end; i++)
        {
            for(int j=start; j<=end; j++)
            {
                if(i==start||i==end||j==start||j==end)
                {
                    arr[i][j]=n;
                }
            }
        }
        start++;
        end--;
        n--;
    }

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

 #include <stdio.h>
 int main()
 {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*n-1; j++)
        {
            if(j%2==0)
            {
                printf("%d ", 2*j+1);
            }
            else if(j%2==1)
            {
                printf("%d ", 2*j);
            }
        }
        printf("\n");
    }
    return 0;
 }

 /* #include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        // for (int j = 0; j < i + 1; j++)   // INCREASING TRIANGLE
        // for (int j = i; j < a; j++)       // DECREASING TRIANGLE
        for (int j = i; j < a; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }

        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < a - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    // char str[] = {'a', 'r', 'i', 'n', '\0'};
    // char str[] = "arin";

    char str[50];
    gets(str);
    // printf("%s\n", str);
    printstr(str);
    return 0;
}

#include <stdio.h>
int main ()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }
        for(int j=0; j<2*a-1-2*i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a-1-i; j++)
        {
            printf(" ");
        }
        for(int j=0; j<i+1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number- ");
    scanf("%d", &a);

    for (int i = 0; i < 2 * a + 1; i++)
    {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf("*");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < a - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        for (int j = 0; j < 2 * a - 1 - 2 * i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 2 * a + 1; i++)
    {
        printf("*");
    }

    return 0;
}

#include <stdio.h>
void encrypted(char *st)
{
    char *ptr = st;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char str[] = "Om Namo Arihantanam : Om Namo Siddhanam : Om Namo Ayariyanam : Om Namo Uvajjhayanam : Om Namo Loy Savvsahunam";
    encrypted(str);
    puts(str);
    return 0;
}

#include <stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char str[] = "Vartman ko Vardhmaan ki avasyakta hai";
    int c = occurence(str, 'a');
    printf("Occurence of 'a' is %d", c);
    return 0;
}

#include <stdio.h>
int find(char* str, char c){
    while(*str != '\0'){
        if(c == *str){
            return 1;
        }
        str++;
    }
    return 0;
}
void main(){
    char str[] = "Hello";
    char c = 'e';
    if(find(str,c)){
        printf("Found ya!\n");
    }else{
        printf(":<\n");
    }
    printf("%s\n",str);
}

#include <stdio.h>
int reverse(char arr[], int c)
{
    int temp;
    for (int i=0; i<(c/2); i++)
    {
        temp=arr[i];
        arr[i]=arr[c-1-i];
        arr[c-1-i]=temp;
    }
    return 0;
}

int main()
{
    char arr[]={1,2,3,4,5,6,7,8};
    for(int i=0; i<8; i++)
    {
        printf("The value of array at index %d is %d\n", i, arr[i]);
    }
    reverse(arr, 8);
    for(int i=0; i<8; i++)
    {
        printf("The value of array at index %d after reversal is %d\n", i, arr[i]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char str[][20]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine","Greater than 9"};
    scanf("%d", &n);
    if(n>9){
        printf("Greater than 9");
        return 0;
    }
    printf("%s",str[n-1]);
    return 0;
}

#include <stdio.h>
int main()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} 

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int size = 2 * n - 1, start = 0, end = size - 1;
    int arr[size][size];

    while (n != 0)
    {
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {
                if (i == start || i == end || j == start || j == end)
                {
                    arr[i][j] = n;
                }
            }
        }
        start++;
                end--;
                n--;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
            
        }
        printf("\n");
        
    }
    return 0;
} */

#include <stdio.h>
int main()
{
    int count=0;
    for(int i=100; i<=200; i++)
    {
        if(i%9==0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}