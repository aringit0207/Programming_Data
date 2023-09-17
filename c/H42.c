#include <stdio.h>
int func(int b)
{
    // int c=0;
    // static int c=1;
    static int c;
    
    printf("%d\n", c);
    c++;
    return b+c;
}

int main()
{
    int a;
    func(a);
    func(a);
    return 0;
}