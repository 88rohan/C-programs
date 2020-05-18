#include<stdio.h>
int main()
{
  int n,x,i,r,s=0;
  printf("Enter a number : ");
  scanf("%d",&n);
  x=n;
  for(i=10;x>0;)
  {
     r=x%i;
     s=s+r;
     x=x/i;
  }
  printf("Sum of digits of %d = %d",n,s);
  return 0;
}
