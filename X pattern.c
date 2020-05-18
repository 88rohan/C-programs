#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    clrscr();
    for(i=1;i<=5;i++)
      {
        for(j=1;j<=i;j++)
           printf(" *");
        for(k=9;k>=2*i;k--)
           printf("  ");
        for(j=1;j<=i;j++)
           printf(" *");
        printf("\n");
      }
    for(i=1;i<=4;i++)
      {
        for(j=4;j>=i;j--)
          printf(" *");
        for(k=1;k<=2*i;k++)
          printf("  ");
        for(j=4;j>=i;j--)
          printf(" *");
        printf("\n");
      }
    getch();
    return 0;
}