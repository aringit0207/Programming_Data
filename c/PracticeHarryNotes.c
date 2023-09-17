// PS-4

// QUES 5
/* #include <stdio.h>
int main()
{
    int a=0;
    for(int i=1; i<=10; i++)
    {
        a+=i;
    }
    printf("%d", a);
    return 0;
}

// QUES 7
#include <stdio.h>
int main()
{
    int a=0;
    for(int i=1; i<=10; i++)
    {
        a+=8*i;
    }
    printf("%d", a);
    return 0;
}

// QUES 8
#include <stdio.h>
int main()
{
    int a, b=1;
    scanf("%d", &a);
    for(int i=a; i>0; i--)
    {
        b*=i;
    }
    printf("The factorial of %d is %d", a, b);
    return 0;
}

// QUES 10
#include <stdio.h>
int main()
{
    int a, b=0;
    scanf("%d", &a);
    for(int i=1; i<=a; i++)
    {
        if(a%i==0)
        {
            b++;
        }
    }
    if(b==2)
    {
        printf("%d is a prime number.", a);
    }
    else
    {
        printf("%d is a composite number.", a);
    }
    return 0;
}

// PS 5

// QUES 1
#include <stdio.h>

float CtoF(float a)
{
    float b = a * 1.8 + 32;
    return b;
}
int main()
{
    float a;
    printf("Enter in Celcius: ");
    scanf("%f", &a);
    printf("In Farenheit: %f", CtoF(a));
    return 0;
}

// QUES 4
#include <stdio.h>

int fibonacci(int a)
{
    if (a == 1)
    {
        return 0;
    }
    else if (a == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}
int main()
{
    int a;
    printf("Enter the element no. of Fibonacci series: ");
    scanf("%d", &a);
    printf("The %dth element of fibonacci series is: %d", a, fibonacci(a));
    return 0;
}

// QUES 6
#include <stdio.h>

int sumN(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a+sumN(a-1);
    }
}
int main()
{
    int n;
    printf("Enter your num: ");
    scanf("%d", &n);
    printf("The sum of first %d natural numbers is : %d", n, sumN(n));
    return 0;
}

// QUES 6
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<2*i+1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// PS 6

// QUES 1
#include <stdio.h>
int main()
{
    int a = 6;
    int *b = &a;
    printf("%d\n", b);
    printf("%d", *b);
    return 0;
}

// QUES 2
#include <stdio.h>

int address(int i)
{
    printf("%d", &i);
}
int main()
{
    int i;
    printf("%d\n", &i);
    address(i);
    return 0;
}

// QUES 3
#include <stdio.h>

void changeValue(int *a)
{
    *a= 500;
}
int main()
{
    int a=5;
    changeValue(&a);
    printf("%d", a);
    return 0;
}

// QUES 4
#include <stdio.h>

int func(int *a, int *b)
{
    int temp;
    temp=*a+*b;
    *b=(*a+*b)/2;
    *a=temp;
    return 0;
}
int main()
{
    int a=4, b=5;
    func(&a, &b);
    printf("The sum is %d and average is %d", a, b);
    return 0;
}

// QUES 5
#include <stdio.h>
int main()
{
    int a=6;
    int *b=&a;
    int **c=&b;
    printf("%d", **c);
    return 0;
}

// QUES 6
#include <stdio.h>

int changeValue(int a)
{
    a = 500;
    return 0;
}
int main()
{
    int a = 5;
    printf("%d\n", a);
    changeValue(a);
    printf("%d", a);
    return 0;
}

// PS 7

// QUES 1
#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    printf("%d", *(arr+2));
    return 0;
}

// QUES 4
#include <stdio.h>
int main()
{
    int a;
    printf("Enter your num: ");
    scanf("%d", &a);
    int arr[10];
    for(int i=0; i<10; i++)
    {
        arr[i]=a*(i+1);
    }
    for(int i=0; i<10; i++)
    {
        printf("%d\n", *(arr+i));
    }
    return 0;
}

// QUES 5
#include <stdio.h>

int reverse(int *arr, int n)
{
    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp=*(arr+i);
        *(arr+i)=*(arr+n-1-i);
        *(arr+n-1-i)=temp;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// QUES 6
#include <stdio.h>

int PosInt(int *arr, int n)
{
    int a=0;
    for(int i=0; i<n; i++)
    {
        if(*(arr+i)>0)
        {
            a++;
        }
    }
    return a;
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("No. of +ve integers is %d", PosInt(arr, n));
    return 0;
}

// QUES 8
#include <stdio.h>

int table(int *arr, int n)
{
    for(int i=0; i<10; i++)
    {
        *(arr+i)=n*(i+1);
    }
    for(int i=0; i<10; i++)
    {
        printf("%d\n", *(arr+i));
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    table(arr, n);
    return 0;
}

// QUES 9
#include <stdio.h>
int main()
{
    int arr[2][3][4];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<4; k++)
            {
                printf("The address at %d, %d, %d is %d\n", i, j, k, &arr[i][j][k]);
            }
        }
    }
    return 0;
}

// PS 8

// QUES 2
#include <stdio.h>
int main()
{
    char str[50];
    scanf("%s", str);
    printf("%s", str);
    return 0;
}

// QUES 3
#include <stdio.h>

int len(char *str)
{
    int count=0;
    while(*str!='\0')
    {
        str++;
        count++;
    }
    return count;
}
int main()
{
    // char str[]={'a', 'r', 'i', 'n', '\0'};
    char str[]={"Arinjain"};
    int l =len(str);
    printf("The length of string is %d", l);
    return 0;
}

// QUES 4
#include <stdio.h>

void slice(char *str, int m, int n)
{
    int i=0;
    while((m+i)<=n)
    {
        *(str+i)=*(str+m+i);
        i++;
    }
    *(str+i)='\0';
}
int main()
{
    char str[]={"ArinJain"};
    slice(str, 1, 6);
    printf("%s", str);
    return 0;
}

// QUES 5
#include <stdio.h>
#include <string.h>
void copy(char *s1, char *s2, char *s3)
{
    strcpy(s3, strcat(s1, s2));
}
int main()
{
    char s1[]={"Arin"};
    char s2[]={"Jain"};
    char s3[10];
    copy(s1, s2, s3);
    puts(s3);
    return 0;
}

// QUES 6
#include <stdio.h>

void encrypt(char *str)
{
    while(*str!=0)
    {
        *str+=1;
        *str++;
    }
}
int main()
{
    char str[]={"This is me, Arin Jain."};
    encrypt(str);
    puts(str);
    return 0;
}

// QUES 7
#include <stdio.h>

void decrypt(char *str)
{
    while(*str!=0)
    {
        *str-=1;
        *str++;
    }
}
int main()
{
    char str[]={"Uijt!jt!nf-!Bsjo!Kbjo/"};
    decrypt(str);
    puts(str);
    return 0;
}

// QUES 8
#include <stdio.h>
int occurence(char *str, char c)
{
    int i=0;
    while(*str!=0)
    {
        if(*str==c)
        {
            i++;
        }
        str++;
    }
    return i;
}
int main()
{
    char c;
    char str[30];
    gets(str);
    printf("Enter your char: ");
    scanf("%c", &c);
    printf("%d", occurence(str, c));
    return 0;
} 

// QUES 9
#include <stdio.h>
int present(char *str, char c)
{
    while (*str != 0)
    {
        if (*str == c)
        {
            return 1;
        }
        str++;
    }
    return 0;
}
int main()
{
    char c;
    char str[30];
    gets(str);
    printf("Enter your char: ");
    scanf("%c", &c);
    if (present(str, c))
    {
        printf("%c is present", c);
    }
    else
    {
        printf("%c is not present", c);
    }
    return 0;
} 

// PS 9

// QUES 1
#include <stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x=234;
    v1.y=45;
    v2.x=654;
    v2.y=76;

    printf("The value of v1 at x is %d and at y is %d\n", v1.x, v1.y);   
    printf("The value of v2 at x is %d and at y is %d\n", v2.x, v2.y);   
    return 0;
} */

