#include<stdio.h>
int main()
{
    int n,s=0,i;
    printf("Enter the numbers:\n" );
    do
      { 
        scanf("%d",&n);
        s=s+n;
        i++;
      }
    while(n==9999);
      printf("Sum of these numbers = %d",s);
}