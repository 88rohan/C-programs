#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the limit for which you want to see prime numbers : ");
    scanf("%d",&n);
    printf("\nPrime numbers are :\n");
    for(i=1;i<=n;i++)
    {
        int f=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                f++;
        }
        if(f==2)
            printf("%d ",i);
    }
}
