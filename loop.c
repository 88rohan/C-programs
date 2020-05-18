#include<stdio.h>
void main()
{
   int i,k=1;
   for(i=1;i<=5;i++)
   {
      k=1;
      while(k<=i)
      {
         printf("%d ",k++);
        // k++;
      }
      printf("\n");
   }
}
