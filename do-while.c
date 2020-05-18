#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    clrscr();
    do
      {
         printf("%d\n",i);
           i++;
    }
  while(i>=2 && i<=10);
   printf("%d\n",i);
   printf("%d\n",i++);
   printf("%d",++i); 
   getch();
}