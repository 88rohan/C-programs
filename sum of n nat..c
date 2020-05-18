#include<stdio.h>
int natural(int);
void main()
{
    int n,r;
    printf("Enter how many terms you want for sum of natural numbers : ");
    scanf("%d",&n);
    r=natural(n);
    printf("\nSum of %d natural numbers = %d",n,r);
}
int natural(int n)
{
    int i,s=0;
    for(i=n;n>0;)
    {
        s=s+n;
        n--;
        natural(n);
    }
    return s;
}
