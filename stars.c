#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    clrscr();
    for(i=1;i<=7;i++)
      {
        for(j=1;j<=i;j++)
        printf(" *");
        printf("\n");
      }
    getch();
    return 0;
}