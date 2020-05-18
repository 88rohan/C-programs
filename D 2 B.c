#include<stdio.h>
int main()
{
    int a[100],n,r,x,d,i=0,k;
    printf("Enter a number in decimal : ");
    scanf("%d",&n);
    x=n;
        do
        {
           d=x/2;
           r=x%2;
           x=d;
           a[i]=r;
           k=i++;
        }
       while(x!=0);
    printf("\nBinary value of %d = ",n);
    for(i=k;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
