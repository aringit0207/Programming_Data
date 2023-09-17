/* #include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[40];
}arin, ayush, hussain;

// struct Student arin, ayush, hussain;

int main()
{
    // struct Student arin, ayush, hussain;
    arin.id=1;
    ayush.id=2;
    hussain.id=3;
    arin.marks=69;
    ayush.marks=68;
    hussain.marks=67;
    arin.fav_char='a';
    ayush.fav_char='b';
    hussain.fav_char='c';
    strcpy(arin.name, "Arin Jain");

    printf("Marks of arin : %d\n", arin.marks);
    printf("My name is %s", arin.name);
    return 0;
} 

// ARRAY OF STRUCTURES

#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[40];
};

int main()
{
    struct Student Facebook[100];
    
    Facebook[0].id=1;
    Facebook[0].marks = 234;
    strcpy(Facebook[0].name, "Arin Jain");

    Facebook[1].id=1;
    Facebook[1].marks = 234;
    strcpy(Facebook[1].name, "Ayush Aherwar");

    Facebook[2].id=1;
    Facebook[2].marks = 234;
    strcpy(Facebook[2].name, "Hussain Rokeriya");

    printf("%s\n", Facebook[0].name);
    printf("%s\n", Facebook[1].name);
    printf("%s\n", Facebook[2].name);

    return 0;
} 

// ANOTHER WAY OF INITIALIZATION

#include <stdio.h>
// #include <string.h>

struct Student
{
    int roll;
    int marks; 
    char name[40];
};

int main()
{
    struct Student Arin={24, 59, "Arin Jain"};

    printf("Roll No. is %d\n", Arin.roll);
    printf("Marks is %d\n", Arin.marks);
    printf("Name is %s\n", Arin.name);

    return 0;
} 

// POINTER AND ARROW OPERATOR

#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    int marks;
    char name[40];
};

int main()
{
    struct Student Arin;
    struct Student *ptr;

    ptr=&Arin;

    // (*ptr).marks=59;
    ptr->marks=59; // WORKS SAME AS ABOVE

    // printf("Marks is: %d\n", (*ptr).marks);
    printf("Marks is: %d\n", ptr->marks); // WORKS SAME AS ABOVE
    
    return 0;
} 

// PASSING STRUCTURE TO A FUNCTION

#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    int marks;
    char name[40];
};

void show( struct Student Jain)
{
    Jain.roll=24;
    Jain.marks=59;
    strcpy(Jain.name, "Arin Jain");

    printf("Roll No. is %d\n", Jain.roll);
    printf("Marks is %d\n", Jain.marks);
    printf("Name is %s\n", Jain.name);

}

int main()
{
    struct Student Arin;
    show(Arin);
    return 0;
} */

// TYPEDEF

#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int roll;
    int marks;
    char name[40];
}e1;

int main()
{
    // struct Student Arin;
    // struct Student *ptr;

    e1 Arin;
    e1 *ptr;

    ptr=&Arin;

    // (*ptr).marks=59;
    ptr->marks=59; // WORKS SAME AS ABOVE

    // printf("Marks is: %d\n", (*ptr).marks);
    printf("Marks is: %d\n", ptr->marks); // WORKS SAME AS ABOVE
    
    return 0;
} 