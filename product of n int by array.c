#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
   clrscr();
   printf("Enter total of numbers you want to take : ");
    scanf("%d",&n);
    int a[n],i,m=1;
   printf("Enter any integers :\n ");
  for(i=0;i<n;i++)
   {
        scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++)
    {
      if(a[i]!=0)
        m=m*a[i];
      if(a[i]==0)
       { 
          continue;
          m=m*a[i];
            }
    }
       printf("Product of numbers = %d",m);
    getch();
    return 0;
 }