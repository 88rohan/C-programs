#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,A;
    clrscr();
    printf("Enter length of cuboid = ");
    scanf("%d",&a);
    printf("Enter breath of cuboid = ");
    scanf("%d",&b); 
    printf("Enter height of cuboib = ");
    scanf("%d",&c); 
    A=a*b*c;
    printf("Area of cuboid = %d",A);
    getch();
    return 0;
}