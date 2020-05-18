#include<stdio.h>
#include<conio.h>

int main()
{
   int a;
   printf("Enter a number = ");
   clrscr();
   scanf("%d",&a);
   if(a%2==0)
     { 
        printf("%d is a even number.",a);
     }
   else
     {
        printf("%d is a odd number.",a);
     }
    getch();
    return 0;
 }