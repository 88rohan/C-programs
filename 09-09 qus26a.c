#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    printf("Swapping of numbers:\n\n");
    printf("Before swapping:\n");
    printf("   First number = ");
    scanf("%d",&a);
    printf("   Second number = ");
    scanf("%d",&b);
    a=a+b; 
    b=a-b;
    a=a-b;
    printf("\nAfter swapping:\n");
    printf("   First number = %d\n",a);
    printf("   Second number = %d",b);
}