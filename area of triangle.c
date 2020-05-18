#include<stdio.h>
#include<conio.h>
int main()
{
    int b,h;
    float A;
    clrscr();
    printf("Enter measurment of base of triangle = ");
    scanf("%d",&b);
    printf("Enter measurment of height of triangle = ");
    scanf("%d",&h);
    A=0.5*b*h;
    printf("Area of triangle = %.2f",A);
    getch();
    return 0;
}