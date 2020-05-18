#include<stdio.h>
//#include<conio.h>
int main()
{
    int n,r,s=0,x;
   // clrscr();
    printf("Enter a number : ");
    scanf("%d",&n);
    x=n;
    while(x!=0)
      {
        r=x%10;
        s=s+r*r*r;
        x=x/10;
    }
    if(s==n)
       printf("%d is an Armstrong number.",n);
    else
       printf("%d is not an Armstrong number.",n);
    return 0;
}
