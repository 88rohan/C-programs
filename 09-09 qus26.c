#include<stdio.h>
#include<conio.h>

int main()
{
    int x, y, t;
    clrscr();
    printf("Enter two numbers :\n");
    scanf("%d%d",&x, &y); 
    printf("Before swapping :\nFirst number = %d\nSecond number = %d\n",x, y); 
    t=x;
    x=y;
    y=t;
    printf("After swapping :\nFirst number = %d\nSecond number = %d",x, y);
    getch();
    return 0;
}