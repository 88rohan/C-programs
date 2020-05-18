#include<stdio.h>
int main()
{
    int a[100];
    int n,r,x,d,i=0,k;
    printf("Enter a number in decimal : ");
    scanf("%d",&n);
    x=n;

        do
        {
           d=x/8;
           r=x%8;
           x=d;
           a[i]=r;
           k=i++;
        }
       while(x!=0);
       printf("\nOctal value of %d = ",n);
    for(i=k;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
