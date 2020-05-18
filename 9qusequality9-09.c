#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    clrscr();
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    if(a==b)
      {
        printf("Both numbers are equal.");
      }
    else
       {printf("Both numbers are not equal.");}
    return 0;
}
