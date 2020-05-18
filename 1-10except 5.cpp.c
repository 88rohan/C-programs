#include<stdio.h>
#include<conio.h>

int main()
{
   int a;
    clrscr();
   printf("The number are : \n");
   for(a=1;a<=10;a++)
     {
        if(a==5)
         continue;
        printf("%d\n",a);
    }
    getch();
    return 0;
 }