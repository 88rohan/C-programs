#include<stdio.h>
#include<conio.h>
int main()
{
    int n, r,s,x,i;
    clrscr();
   printf("Armstrong numbers between 1 to 1000:\n");
   for(i=1;i<=1000;i++)
   {
        s=0;
        n=i;
        while(n!=0)
        {
        r=n%10;
        s=s+r*r*r;
        n=n/10;
        }
        if(s==i)
        printf("%d ",i);
    }
    return 0;
}