#include <stdio.h>
int main()
{
    int ch;

    while (1)
    {
        printf("\nThese are some conversions below-\n\n");
        printf("Kilometers to Miles --> 1\n");
        printf("Inches to Foot --> 2\n");
        printf("Centimeters to Inches --> 3\n");
        printf("Pounds to Kilograms --> 4\n");
        printf("Inches to Meters --> 5\n\n");
        printf("Press '6' to Quit!!!\n\n");
        printf("Enter the corresponding number to use that- ");

        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            float a;
            printf("\nEnter the value in Kilometers- ");
            scanf("%f", &a);
            printf("The above value in Miles is %.3f\n", a * 0.62137119);
            break;

        case 2:
            float b;
            printf("\nEnter the value in Inches- ");
            scanf("%f", &b);
            printf("The above value in Foot is %.3f\n", b * 0.0833333);
            break;

        case 3:
            float c;
            printf("\nEnter the value in Centimeters- ");
            scanf("%f", &c);
            printf("The above value in Inches is %.3f\n", c * 0.393701);
            break;

        case 4:
            float d;
            printf("\nEnter the value in Pounds- ");
            scanf("%f", &d);
            printf("The above value in Kilograms is %.3f\n", d * 0.453592);
            break;

        case 5:
            float e;
            printf("\nEnter the value in Inches- ");
            scanf("%f", &e);
            printf("The above value in Meters is %.3f\n", e * 0.0254);
            break;

        case 6:
            printf("Quitting the Program.....");
            goto end;

        default:
            printf("Enter only valid numbers please!!!\n");
        }
    }
end:
    return 0;
}