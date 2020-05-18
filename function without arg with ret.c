#include<stdio.h>
int series();
int main()
{
 int r;
 r = series();
 printf("\n\nResult of factorial = %d",r);
}
int series()
{
  int m=1,i,n;
  printf("Enter a number whose factorial you want : ");
  scanf("%d",&n);
  printf("\nFactorial : !%d = ",n);
  for(i=n;i>0;i--)
    {
      m=m*n;
      if(n==1)
      {
        printf("%d",n);
      }
      else
      {
        printf("%d*",n--);
      }
    }
  return m;
}
