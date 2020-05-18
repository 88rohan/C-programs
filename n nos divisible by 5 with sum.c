#include<stdio.h>
#include<conio.h>

int main()
{
   int i,n=0,m,s=0;
    clrscr();
   printf("Number of integers divisible by 5 are : ");
    scanf("%d",&m);
    printf("\nThe numbers are :\n");
   for(i=1;i<=m;i++)
     { 
        n=5*i;
        printf("%d\t",n);
        s=s+n;
    }
    printf("\n\nTheir sum = %d",s);
    getch();
    return 0;
 }