// QUES 1(a)
/* #include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("C_lab.txt","w+");
    fputs("It belongs to c language subject.\nHere is my assignment number 5.\nThankyou",ptr);
    return 0;
} 

// QUES 1(b)
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    int flag=1;
    ptr = fopen("C_lab.txt","r+");
    char str;
    for(str = getc(ptr) ; str != EOF ; str = getc(ptr))
    {
        if(str == '\n')
        {
            flag++;    
        }
    }
    printf("The number of lines changed in this file is :- %d\n",flag);
    return 0;
} 

// QUES 2(a)
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char str;
    ptr = fopen("C_lab.txt","r+");
    int i=0,j=0;
    if(ptr == NULL)
    {
        printf("No such file exists.\n");
        return 0;
    }
    for(str = getc(ptr) ; str != EOF ; str = getc(ptr))
    {
        if(str == ' ')
        {
            j++;
        }
        i++;
    }
    printf("The number of words in the given file is %d.\n",j);
    printf("the number of characters in the given file is %d.\n",i);
    return 0;
} 

// QUES 2(b)
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char str;
    ptr = fopen("C_lab.txt","a+");
    int i=0,j=0;
    if(ptr == NULL)
    {
        printf("No such file exists.\n");
        return 0;
    }
    for(int i = 0 ; i < 10 ; i++)
    {
        fputs("THIS IS NEW CONTENT.\n",ptr);
    }
    return 0;
} */

// QUES 3
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    FILE *ptr1 = NULL;
    FILE *ptr2 = NULL;
    char str;
    char str1;
    char str2;
    ptr = fopen("C_lab.txt","a+");
    ptr1 = fopen("FILE2.TXT","a+");
    ptr2 = fopen("FILE3.TXT","a+");
    if(ptr == NULL)
    {
        printf("No such file exists.\n");
        return 0;
    }
    fputs("THIS IS THE CONTENT OF FILE 1\n\n",ptr2);
    for(str = getc(ptr) ; str != EOF ; str = getc(ptr))
    {
        str2 = str;
        putc(str2,ptr2);
    }
    fputs("\n\n",ptr2);
    fputs("THIS IS THE CONTENT OF FILE 2\n\n",ptr2);
    for(str1 = getc(ptr1) ; str1 != EOF ; str1 = getc(ptr1))
    {
        str2 = str1;
        putc(str2,ptr2);
    }
    return 0;
}