#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a,b,c;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
          printf("%d ",i);
    }
    printf("\n");
    for(i=1;i<=b;i++)
    {
        if(b%i==0)
          printf("%d ",i);
    }
    printf("\n");
    for(i=1,j=1;i<=a,j<=b;i++,j++)
    {
        if(a%i==0&&b%j==0)
        {
            if(i==j)
                printf("%d ",i);
        }
    }
    return 0;
}
