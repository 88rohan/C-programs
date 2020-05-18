#include<stdio.h>
void main()
{
  int a[2][2],b[2][2],c[2][2],i,j,k,sum=0;
  printf("Enter nine elements for first matrix: ");
  for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
       scanf("%d",&a[i][j]);
   }
   printf("First matrix is:\n");
   for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
     {
       printf("%d ",a[i][j]);
     }
     printf("\n");
   }
   printf("Enter nine elements for second matrix: ");
  for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
       scanf("%d",&b[i][j]);
   }
    printf("Second matrix is:\n");
   for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
     {
       printf("%d ",b[i][j]);
     }
     printf("\n");
   }
   printf("Multiplication of matrixs is:\n");
   for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
       {
         sum=sum+a[i][j]*b[i][j];
         c[i][j]=sum;
        }
    }
    for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
     {
       printf("%d ",c[i][j]);
     }
     printf("\n");
   }
}
