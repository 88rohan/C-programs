#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,r,s=0,x; 
    clrscr();
    printf("Enter a number = ");
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
      int m=1;
      r=x%10;
      for(i=r;i>0;i--)
            m=m*i;
      s=s+m;
      x=x/10;
    }
    if(n==s)
      printf("%d is a strong number.", n);
    else
      printf("%d is not a strong number. ",n);
    getch();
 }