#include<stdio.h>
#include<conio.h>
int main()
{
    int p,r,t;
    float s,A;
    clrscr();
    printf("Enter principle amount = ");
    scanf("%d",&p);
    printf("Enter intrest rate = ");
    scanf("%d",&r);
    printf("Enter time period = ");
    scanf("%d",&t);
    s=p*r*t/100;
    A=p+s;
    printf("Simple Intrest = %.2f\n",s);
    printf("Net Amount = %.2f",A);
    getch();
    return 0;
}