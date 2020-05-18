#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,m=1,s=0,x;
    //clrscr();
   // printf("Enter a number : ");
    //scanf("%d",&n);
    for(n=100;n<=1000;n++)
    {
    x=n;
    while(x!=0)
      {
        r=x%10;
        m=m*r;
        s=s+r;
        x=x/10;
      }
    
      // printf("\nProduct of digits of %d = %d",n,m);
      // printf("\nSum of digits of %d = %d\n",n,s);
     if(s==m)
       printf("%d ",n);
    }
    getch();
    return 0;
}