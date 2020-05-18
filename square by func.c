#include<stdio.h>
int square(int);
int main()
{ 
   int n, r;
   printf("Enter a number = ");
   scanf("%d",&n);
   r= square(n);
   printf("Square of %d = %d",n,r);
   return 0;
}
int square(int a)
{
   int s;
   s=a*a;
   return s;
}