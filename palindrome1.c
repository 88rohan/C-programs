#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,r,s=0,x;
   // clrscr();
    //printf("Enter a number : ");
   // scanf("%d",&n);
   for(i=10;i<=1000;i++)
   {
       x=i;
    while(x!=0)
      {
        r=x%10;
        s=s*10+r;
        x=x/10;
      }
        if(s==i)
       printf("%d ",i);
   }
    return 0;
}
