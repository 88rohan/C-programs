#include<stdio.h>
#define PI 3.14
int main()
{
    float radius, area, cir;
    printf("Enter radius of the circle : ");
    scanf("%f",&radius);
    area = PI*radius*radius;// Notice, the use of PI
    cir = 2*PI*radius;
    printf("\n\tCircumference = %.2f",cir);
    printf("\n\n\tArea = %.2f",area);
    return 0;
}
