#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int quo(int,int);
int rem(int,int);
void main()
{
    int a,b,r,s,t,u,v;
    int (*p)(int,int);
    int (*p1)(int,int);
    int (*p2)(int,int);
    int (*p3)(int,int);
    int (*p4)(int,int);
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    p=sum;
    p1=sub;
    p2=mul;
    p3=quo;
    p4=rem;
    r=p(a,b);
    s=p1(a,b);
    t=p2(a,b);
    u=p3(a,b);
    v=p4(a,b);
    printf("\nSum = %d",r);
    printf("\nDifference = %d",s);
    printf("\nMultiplication = %d",t);
    printf("\nQuotient = %d",u);
    printf("\nRemainder = %d",v);
}
int sum(int x,int y)
{
    return (x+y);
}
int sub(int x,int y)
{
    return (x-y);
}
int mul(int x,int y)
{
    return (x*y);
}
int quo(int x,int y)
{
    return (x/y);
}
int rem(int x,int y)
{
    return (x%y);
}
