#include<stdio.h>
int array(int []);
int main()
{
  int i,a[5];
  for(i=0;i<5;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("Array is :\n");
   for(i=0;i<5;i++)
    {
      printf("%d  ",a[i]);
    }
   int *ptr = array(a);
   for(i=0;i<5;i++)
     {
       printf("%d  ",ptr[i]);
     }
}
int array(int x[5])
{
  int *p,i;
  p=&x;
  for(i=0;i<5;i++)
   {
     x[i]=x[i]++;
   }
  return p;
}
