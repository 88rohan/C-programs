#include<stdio.h>
#include<conio.h>

void main()
{
    int n,m=1,i; 
    clrscr();
    printf("Enter a number = ");
    scanf("%d",&n);
    printf("Factorial of %d = ",n);
   for(i=n;i>0;i--)
      { 
         m=m*n;
         if(n==1)
         printf("%d",n);
        else
           printf("%d*",n--);
      }
    printf(" = %d", m);
    getch();
 }