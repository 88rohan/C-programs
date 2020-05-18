#include<stdio.h>
void main()
{
  int a[3][3],b[3][3],i,j;
  printf("Enter nine elements for first matrix: ");
  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
       scanf("%d",&a[i][j]);
   }
   printf("First matrix is:\n");
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       printf("%d ",a[i][j]);
     }
     printf("\n");
   }
   printf("Enter nine elements for second matrix: ");
  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
       scanf("%d",&b[i][j]);
   }
    printf("Second matrix is:\n");
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       printf("%d ",b[i][j]);
     }
     printf("\n");
   }
   printf("Addition of matrixs is:\n");
   for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
       {
         printf("%d ",a[i][j]+b[i][j]);
       }
       printf("\n");
    }
}
