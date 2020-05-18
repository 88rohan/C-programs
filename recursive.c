#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("Enter a number for factorial : ");
    scanf("%d",&n);
    fact(n);
    printf("\n\tFactirial of !%d = %d",n,fact(n));
}
int fact(int n)
{
    int r;
    if(n==1)
    {
        return 1;
    }
    else
    {
        r=n*fact(n-1);
        return r;
    }
}
