#include<stdio.h>
void main()
{
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping :\n\t1st number = %d\n\t2nd number = %d",*p1,*p2);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("\n\nAfter swapping :\n\t1st number = %d\n\t2nd number = %d",*p1,*p2);
}
