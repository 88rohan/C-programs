#include<stdio.h>
int main()
{
    int a,b,c,d,e,i;
    printf("Enter any five interers :\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("The multiplication table from 1 to 10 of given numbers is:\n");
    printf("Multiple\tFor %d\tFor %d\tFor %d\tFor %d\tFor %d\n",a,b,c,d,e);
    printf("--------------------------------------------------------\n");
    for(i=1;i<=10;i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",i,i*a,i*b,i*c,i*d,i*e);
    }
}