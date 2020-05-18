#include<stdio.h>
int array(int []);
void main()
{
  int a[7] ,i,z;
  printf("Enter the elements of 1st array is :\n");
  for(i=0;i<7;i++)
   {
      scanf("%d",&a[i]);
   }
  printf("The array is :\n");
  for(i=0;i<7;i++)
   {
      printf("%d ",a[i]);
   }
  z=array(a);
  if(z==1)
   {
     printf("Sum of all 2's = 8");
     printf("\nSo the array is true.");
   }
  else
    printf("\nThe array is not true.");
}
int array(int x[])
{
  int i,r,s=0; 
  for(i=0;i<7;i++)
     {
        if(x[i]==2)
          s=s+x[i];
     }
   if(s==8)
     r=1;
   return r; 
}