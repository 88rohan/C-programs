#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,s=0,x;
    clrscr();
    printf("Enter a number : ");
    scanf("%d",&n);
    x=n;
    while(x!=0)
      {
        r=x%10;
        s=s+r;
        x=x/10;
    }
    printf("Sum of %d digit = %d",n,s);
    return 0;
}