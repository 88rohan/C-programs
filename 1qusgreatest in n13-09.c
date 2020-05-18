#include<stdio.h>
int main()
{
    int n,i,a,g=-32768;
    printf("Enter total of numbers you want to take = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
        scanf("%d",&a);
        if(a>g)
          g=a;
     }
    printf("%d is greatest number.",g);
    return 0;
}
