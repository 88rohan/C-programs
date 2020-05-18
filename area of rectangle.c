#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,A;
    clrscr();
    printf("Enter length of rectangle = ");
    scanf("%d",&a);
    printf("Enter breath of rectangle = ");
    scanf("%d",&b); 
    A=a*b;
    printf("Area of rectangle = %d",A);
    getch();
    return 0;
}