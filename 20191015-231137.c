#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,r,s=0,x; 
    clrscr();
    printf("Enter a number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    x=i;
    while(x!=0)
    {
      int m=1,j;
      r=x%10;
      for(j=r;j>0;j--)
            m=m*j;
      s=s+m;
      x=x/10;
    }
    if(i==s)
      printf("%d ", i);
    }
    getch();
 }