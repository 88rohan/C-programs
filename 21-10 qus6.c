#include<stdio.h>
int sum(int []);
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
  z=sum (a);
  if(z==1)
    printf("\nTrue\nUnlucky.");
  else
    printf("\nFalse\nNot unlucky.");
}
int sum(int b[])
{
  int i,r; 
  for(i=0;i<5;i++)
     {
        if(b[i]==1 && b[i+1]==3)
             r=1;
     }
   return r ;
}