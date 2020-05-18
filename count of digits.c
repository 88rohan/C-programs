#include<stdio.h>
void main()
{
    int n,x,k=0,r;
    printf("Enter a number : ");
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        r=x%10;
        k++;
        x=x/10;
    }
    printf("\nDigits in given number = %d",k);
}
