#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,s=0,q;
    clrscr();
    printf("The series of square and their sum of n natural numbers:\n\n");
    printf("Enter the last natural number(n) = ");
    scanf("%d",&n);
    printf("\nThe series of square of %d natural is:\n",n);
    for(i=1;i<=n;i++)
    {
      q=i*i;
      printf(" %d",q);
      s=s+q;
    }
    printf("\n\n Sum of the series = %d",s);
 }