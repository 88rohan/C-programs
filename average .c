#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,A;
    clrscr();
    printf("Enter three numbers =\n");
    scanf("%d%d%d",&a,&b,&c);
    A=(a+b+c)/3;
    printf("Average = %d",A);
    getch();
    return 0;
}