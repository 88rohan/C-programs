#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,j,n,s=0;
    clrscr();
    printf("Enter the limit of series = ");
    scanf("%d",&n);
    printf("\nThe series is:\n\t");
    for(i=1;i<=n;i++)
      {
        for(j=1;j<=i;j++)
          {
           printf("9");
          }
           s=s+pow(10,i)-1;
        if(i<n)
           printf(" + ");
      }
    printf("\nTotal of the series = %d",s);
    getch();
    return 0;
}