#include<stdio.h>
void main()
{
  int a[2],b[3],i,c[2];
  printf("Elements of 1st array:\n");
  for(i=0;i<2;i++)
     scanf("%d",&a[i]);
  printf("The 1st array is :\n");
  for(i=0;i<2;i++)
   {
      printf("%d ",a[i]);
   }
  printf("\nElements of 2nd array:\n");
  for(i=0;i<3;i++)
     scanf("%d",&b[i]);
  printf("The 2nd array is :\n");
  for(i=0;i<3;i++)
   {
      printf("%d ",b[i]);
   }
  if(a[i]!=0)
     c[i]=a[i];
  else if(b[i]>0)
    { c[0]=a[i];
      c[1]=b[i];}
  if(a[i]==0&&b[i]>0)
    c[i]=b[i];
  printf("\nNew array is\n");
  for(i=0;i<2;i++)
    {
      printf("%d ",c[i]);
    }
}