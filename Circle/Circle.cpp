#include<stdio.h>
#define PI 3.1415
int main()
{
    float r, area, dia, cir;
    printf("Input Radius : ");
    scanf_s("%f", &r);
    if (r >= 0)
    {
        area = r * r * PI;
        dia = r * 2;
        cir = 2 * PI * r;
        printf("Area	 	= %.2f", area);
        printf("\nDiameter	= %.2f", dia);
        printf("\nCircumference 	= %.2f", cir);
    }
    else printf("Error");
    return 0;
}