#include<stdio.h>
#include<conio.h>

int main()
{
   int i,n=0;
    clrscr();
   printf("First ten integers divisible by 5 are : \n");
   for(i=1;i>0;i++)
     { 
        n=5*i;
        printf("%d\n",n);
        if(i>9)
         break;
    }
    getch();
    return 0;
 }