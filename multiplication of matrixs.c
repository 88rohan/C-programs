#include<stdio.h>
void main()
{
  int a[3][3],b[3][3],c[3][3],i,j,k;
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
   printf("Multiplication of matrixs is:\n");
   for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
       {
        c[i][j]=0;
        for(k=0;k<3;k++)
           {
             c[i][j]=c[i][j]+a[i][k]*b[k][j];
           }
       }
    }
    for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       printf("%d ",c[i][j]);
     }
     printf("\n");
   }
}
