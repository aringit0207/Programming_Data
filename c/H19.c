// WITH AGRUEMENTS AND WITH RETURN VALUE
/*#include <stdio.h>
    int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, c;
    a = 3;
    b = 8;
    c = sum(a, b);
    printf("The sum is %d\n", c);
    return 0;
} 

// WITH AGRUEMENTS AND WITH RETURN VALUE
#include <stdio.h>
  int sum(int a, int b); // IN THIS WE HAVE DECLARED THE FUNCTION
  int main()
{
    int a, b, c;
    a = 3;
    b = 8;
    c = sum(a, b);
    printf("The sum is %d\n", c);
    return 0;
}
 int sum(int a, int b)
{
    return a + b;
}

// WITH AGRUEMENTS AND WITHOUT RETURN VALUE
#include <stdio.h>
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main()
{
    printstar(5);
    return 0;
}

// WITHOUT AGRUEMENTS AND WITH RETURN VALUE
#include <stdio.h>
int takenumber()
{
    int i;
    printf("Enter a number-\n");
    scanf("%d", &i);
    return i;
}

int main()
{
    int a;
    a = takenumber();
    printf("The number entered is %d", a);
    return 0;
}

// WITHOUT AGRUEMENTS AND WITHOUT RETURN VALUE
#include <stdio.h>
void myname()
{
    printf("Arin Jain.");
}

int main()
{
    printf("My name is ");
    myname();
    return 0;
}

// QUICK QUIZ
#include <stdio.h>
void GoodMorning() {
    printf("Good Morning\n");
}
void GoodAfternoon() {
     printf("Good Afternoon\n");
}
void GoodNight() {
     printf("Good Night\n");
}

int main() {
    GoodMorning();
    GoodAfternoon();
    GoodNight();
    return 0;
}*/

// QUICK QUIZ
#include <stdio.h>
#include <math.h>

int main()
{
    float side;
    printf("Enter the side of square- ");
    scanf("%f", &side);
    printf("The area of square is %f", pow(side, 2));
    return 0;
}