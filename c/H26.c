#include <stdio.h>
int main()
{
    int a = 10;
    int *ptra = &a;
    int *ptr2 = NULL;
    int *ptr3=ptra;
    
    printf("The value of a is %d\n", a);     // PRINTS THE VALUE OF 'a'
    printf("The value of a in INTEGER FORM is %d\n", *ptra); // PRINTS THE VALUE OF 'a' IN INTEGER FORM
    
    printf("The address of a is %p\n", &a);  // PRINTS THE ADDRESS OF 'a'
    printf("The address of a in HEXADECIMAL FORM is %x\n", &a);  // PRINTS THE ADDRESS OF 'a' IN HEXADECIMAL FORM
    
    printf("The address of ptra is %p\n", &ptra);  // PRINTS THE ADDRESS OF 'ptra'
    printf("The address of ptra is %x\n", &ptra);  // PRINTS THE ADDRESS OF 'ptra' IN HEXADECIMAL FORM
    
    printf("The value of some garbage is %p\n", ptr2);
    printf("%d", *ptr3);

    return 0;
}