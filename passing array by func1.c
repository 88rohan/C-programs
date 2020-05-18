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
   array(a);
   for(i=0;i<5;i++)
     {
       printf("%d  ",z[i]);
     }
}
int array(int x[5])
{
  int i;
  static int z[5];
  for(i=0;i<5;i++)
   {
     z[i]=x[i]++;
   }
  return z;
}
