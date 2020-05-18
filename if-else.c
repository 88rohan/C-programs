#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    clrscr();
    printf("Enter a number = ");
    scanf("%d",&a);
    if(a>10)
     {printf("%d is greater than 10.",a);}
    else                        
      {printf("%d is smaller than 10.",a);}
    getch();
    return 0;
}