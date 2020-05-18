#include<stdio.h>
int sum(int [], int []);
void main()
{
  int a[5] ,i,z,b[5];
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
  printf("\nEnter the elements of 2nd array is :\n");
  for(i=0;i<5;i++)
   {
      scanf("%d",&b[i]);
   }
  printf("The array is :\n");
  for(i=0;i<5;i++)
   {
      printf("%d ",b[i]);
   }
  z=sum (a,b);
    printf("\nCount = %d",z);
}
int sum(int x[], int y[])
{
  int i,r,c=0; 
  for(i=0;i<5;i++)
     {
        r=x[i]-y[i];
        if(r<0)
           r=-r;
        else
           r=r;
        if(0<r&&r<=2)
             c++;
     }
   return c ;
}