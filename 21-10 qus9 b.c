#include<stdio.h>
void array(int []);
void main()
{
  int a[5] ,i,z;
  printf("Enter the elements of 1st array is :\n");
  for(i=0;i<5;i++)
   {
      scanf("%d",&a[i]);
   }
  printf("The array is :\n");
  for(i=0;i<5;i++)
   {
      printf("%d ",a[i]);
   }
  array(a);
  printf("\n\nArray of greater number is:\n");
  for(i=0;i<5;i++)
    printf("%d ",a[i]);
}
void array(int x[])
{
  int i,r,j; 
  for(i=0;i<5;i++)
     {
        for(j=0;j<5;j++)
           {
              if(x[i]<x[j])
                x[j]=x[i];
           }
     }
}