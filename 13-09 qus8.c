#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,n,A,S,P,D;
    clrscr();
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Here,   1 stands for addition\n\t2 stands for subtraction\n\t3 stands for Multiplication\n\t4 stands for Division and Remainder");

        printf("\nEnter operation number : ");
    scanf("%d",&n);
    switch(n)
      {
        case 1 : A=a+b;
                 {printf("Sum = %d\n",A);}
                  break;
         case 2 : S=a-b;
                  {printf("Difference = %d\n",S);}
                  break;
        case 4 : D=a/b; 
                 {printf("Division = %d\nRemainder = %d",D,a%b);}
                   break;
        case 3 : P=a*b;   
                 {printf("Product = %d\n",P);}
                   break;
      }
    getch();
    return 0;
}