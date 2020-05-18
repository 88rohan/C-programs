#include<stdio.h>
void main()
{
    int n,x,k=0,r,s=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        r=x%10;
        s=s*10+r;
        x=x/10;
    }
    printf("\nReverse of given number = %d",s);
}
