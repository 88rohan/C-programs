#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,s=0,x,i;
    clrscr();
   printf("Enter a number:\n");
  for(i=1;i<=1000;i++)
   {
        
        r=i%10;
        s=s+r*r*r;
        i=i/10;
      if(i>0)
        {
          if(s==i)
          printf("%d ",i);
        }
    }
    /*else
       printf("%d is not an Armstrong number.",n);*/
    return 0;
}