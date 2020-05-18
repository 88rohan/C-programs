#include<stdio.h>
#define PI 3.1415
#define circleArea(r)(PI*r*r)
int main()
{
    float radius, area;
    printf("Enter radius of the circle : ");
    scanf("%f",&radius);
    area=circleArea(radius);
    printf("\n\tArea of circle = %.2f", area);
    return 0;
}
