/*
// JULY 2022
#include <stdio.h>
int main()
{
    int x=1, y=2, z=3;
    float a=1.1, b=2.2, c=3.3;
    // float t = a*z%y*(int)c/5&&y>x||y++;
    // float t = ++x/2/y++*z/x++*a&&z;
    float t = (x<=z)||(++y>b*++x)&&(z>=5*(int)c);
    printf("%f", t);
    return 0;
} 

// DEC 2019
#include <stdio.h>
int main()
{
    int x=1, y=2, z=4;
    float a=0.1, b=0.2, c=0.3;
    // float t = z+y++-a*(int)c/3/z;
    float t = ++z%y*x++*7/x-a;
    // float t = x/y/b/c/z/a;
    printf("%f", t);
    return 0;
} */

#include <stdio.h>
#include <math.h>
int main()
{
    double n = pow(2, 63) -  1;
    printf("%lf", n); 
    return 0;
}