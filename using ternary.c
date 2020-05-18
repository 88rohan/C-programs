#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)&&(a>c)?printf("%d is greater",a):((b>a)&&(b>c)?printf("%d is greater",b):printf("%d is greater",c));
    if(a>b&&a>c)
    {
        if(a%2==0)
            printf("\n%d is even number.",a);
        else
            printf("\n%d is odd number.",a);
    }
    if(b>a&&b>c)
    {
        if(b%2==0)
            printf("\n%d is even number.",b);
        else
            printf("\n%d is odd number.",b);
    }
    if(c>b&&c>a)
    {
        if(c%2==0)
            printf("\n%d is even number.",c);
        else
            printf("\n%d is odd number.",c);
    }
}
