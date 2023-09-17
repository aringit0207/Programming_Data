#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    union Student Arin;
    Arin.id=1;
    Arin.marks=59;
    Arin.fav_char='a';
    strcpy(Arin.name, "Arin Jain"); // LAST ONE WILL BE CORRECT AND THE ABOVE ONES WILL BE CORRUPTED

    printf("The id is %d\n", Arin.id);
    printf("The id is %d\n", Arin.marks);
    printf("The id is %c\n", Arin.fav_char);
    printf("The id is %s\n", Arin.name);

    return 0;
}