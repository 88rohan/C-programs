#include<stdio.h>
int fabo(int);
int main()
{
    int n,i,r;
    printf("Enter number of term you want for Fabnoci series : ");
    scanf("%d",&n);
    printf("\nFabnoci series : ");
    for(i=0;i<n;i++)
    {
        r=fabo(i);
        printf("%d ",r);
    }
    return 0;
}
int fabo(int n)
{
    int r;
    if(n==0||n==1)
    {
        r=1;
    }
    else
    {
        r= fabo(n-1)+fabo(n-2);
    }
    return r;
}
