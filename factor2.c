#include<stdio.h>
#include<conio.h>

int main()
{
   int i,n,m,s,a,b,l;
    clrscr();
    printf("Enter two numbers for its factor and common factor:\n");
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    printf("Please enter the limit of factors = ");
    scanf("%d",&l);
    printf("Multiples of %d are :\n",a);
   for(i=1;i<=l;i++)
     { 
          if(i%a==0)
          printf("%d\t",i);
    }
     printf("\n\nMultiples of %d are :\n",b);
   for(i=1;i<=l;i++)
     { 
        if(i%b==0)
          printf("%d\t",i);
    }
    printf("\n\nThe common factors are:\n");
    
    for(i=1;i<=l;i++)
         {
           if(i%a==0 && i%b==0)
             printf("%d\t",i);
        }
    
    getch();
    return 0;
 }