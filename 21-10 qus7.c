#include<stdio.h>
int array(int [],int[]);
void main()
{
  int a[2] ,i,z,b[2];
  printf("Enter the elements of 1st array is :\n");
  for(i=0;i<2;i++)
   {
      scanf("%d",&a[i]);
   }
  printf("The array is :\n");
  for(i=0;i<2;i++)
   {
      printf("%d ",a[i]);
   }
  printf("\n\nEnter the elements of 2nd array is :\n");
  for(i=0;i<2;i++)
   {
      scanf("%d",&b[i]);
   }
  printf("The array is :\n");
  for(i=0;i<2;i++)
   {
      printf("%d ",b[i]);
   }
  z=array(a,b);
  printf("\n\nArray whose sum is greater is:\n");
  if(z==1)
    {
       for(i=0;i<2;i++)
          printf("%d ",a[i]);
    }
  else
    {
       for(i=0;i<2;i++)
          printf("%d ",b[i]);
    }
}
int array(int x[], int y[])
{
  int s1=0, s2=0, i,r; 
  for(i=0;i<2;i++)
     {
        s1=s1+x[i];
        s2=s2+y[i];
     }
   if(s1>s2)
     r=1;
    else
      r=0;
   return r ;
}