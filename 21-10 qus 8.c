#include<stdio.h>
void sum(int []);
void main()
{
  int a[5] ,i,z;
  printf("Enter the elements of array is :\n");
  for(i=0;i<5;i++)
   {
      scanf("%d",&a[i]);
   }
  printf("The array is :\n");
  for(i=0;i<5;i++)
   {
      printf("%d ",a[i]);
   }
  sum (a);
  for(i=0;i<5;i++)
    {
      printf("%d ",a[i]);
    }
}
void sum(int x[])
{
  int i,j,r;
  printf("\nEnter how many times you want to rotate = ");
  scanf("%d",&r);
  for(i=1;i<=r;i++)
    {
      int t=x[0];
      for(j=0;j<5;j++)
       {
          x[j]=x[j+1];
       }
      x[4]=t;
    }
}
