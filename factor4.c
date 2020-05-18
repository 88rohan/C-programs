#include <stdio.h>
int main()
{
   int n,i;
   printf("Enter a positive integer: ");
   scanf("%d",&n);
  if(n>0)
   printf("Factors of %d are: ", n);
   for(i=1;i<=n;++i)
   {
           if (n%i == 0)
              printf("%d ",i);
   }
   if(n<=0)
     printf("Sorry factor of %d is not possible.\nPlease try with some positive numbers greater than 0.",n);
   return 0;
}
