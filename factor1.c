#include<stdio.h>
#include<conio.h>

int main()
{
   int i,n,m,s,a,b;
    clrscr();
    printf("Enter two numbers for its factor and common factor:\n");
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    printf("Multiples of 4 are :\n");
   for(i=1;i<=100;i++)
     { 
        if(i%a==0)
        { n=i;
          printf("%d\t",n);}
    }
     printf("\n\nMultiples of 6 are :\n");
   for(i=1;i<=100;i++)
     { 
        if(i%b==0)
        { m=i;
          printf("%d\t",m);}
    }
    printf("\n\nThe common factors are:\n");
    
    for(i=1;i<=)
          
           if(i%4==0 && i%6==0)
             printf("%d\t",i);
        }
    
    getch();
    return 0;
 }