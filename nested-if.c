#include<stdio.h>
#include<conio.h>

int main()
{
    int a; 
    clrscr();
    printf("Enter a number = ");
    scanf("%d",&a);
    if(a!=1)
      {
        if(a!=2)
          {
             if(a!=3)
               {printf("%d is a invalid number.",a); }
             else
               {printf("Three");}
          }
        else
          {printf("Two");}
      }
    else
      {printf("One");}
    return 0;
}