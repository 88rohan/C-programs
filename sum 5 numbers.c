#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,s=0;
    clrscr();
    printf("Enter any five positive number >0 :\n");
    for(i=1;i<=5;i++)
      {
        scanf("%d",&n);
           s=s+n;
         }
        if(n>0)
      {printf("Sum = %d",s);}
        else
          {
            printf("Sorry, invalid entries.");
        }
    
    return 0;
}