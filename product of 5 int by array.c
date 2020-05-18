#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5],i,m=1;
   printf("Enter any five integers :\n ");
  for(i=0;i<5;i++)
   {
        scanf("%d",&a[i]);
        }
    for(i=0;i<5;i++)
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