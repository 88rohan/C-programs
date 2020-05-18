#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,x,s=0,r;
    printf("Enter a binary number : ");
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        r=x%10;
        x=x/10;
        s=s+r*pow(2,i);
        i++;
    }
    printf("\nDecimal value of %d = %d",n,s);
    return 0;
}
