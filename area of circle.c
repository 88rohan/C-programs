#include<stdio.h>
#include<conio.h>
int main()
{
    int r;
    float a;
    clrscr();
    printf("Enter radius of circle = ");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of circle = %.2f",a);
    getch();
    return 0;
}