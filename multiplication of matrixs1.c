#include<stdio.h>
void main()
{
  int r1,r2,c2,c1;
  printf("Enter the order of first matrix(r,c) : ");
  scanf("%d %d",&r1,&c1);
  printf("Enter the order of second matrix(r,c) : ");
  scanf("%d %d",&r2,&c2);
  int a[r1][c1],b[r2][c2],c[r1][c2],i,j,k;
  printf("Enter %d elements for first matrix: ",r1*c1);
  for(i=0;i<r1;i++)
   {
     for(j=0;j<c1;j++)
       scanf("%d",&a[i][j]);
   }
   printf("First matrix is:\n");
   for(i=0;i<r1;i++)
   {
     for(j=0;j<c1;j++)
     {
       printf("%d ",a[i][j]);
     }
     printf("\n");
   }
   printf("Enter %d elements for second matrix: ",r2*c2);
  for(i=0;i<r2;i++)
   {
     for(j=0;j<c2;j++)
       scanf("%d",&b[i][j]);
   }
    printf("Second matrix is:\n");
   for(i=0;i<r2;i++)
   {
     for(j=0;j<c2;j++)
     {
       printf("%d ",b[i][j]);
     }
     printf("\n");
   }
   if(c1==r2)
    {
       printf("Multiplication of matrixs is:\n");
       for(i=0;i<r1;i++)
        {
          for(j=0;j<c2;j++)
           {
            c[i][j]=0;
            for(k=0;k<c1;k++)
               {
                 c[i][j]=c[i][j]+a[i][k]*b[k][j];
               }
           }
        }
        for(i=0;i<r1;i++)
       {
         for(j=0;j<c2;j++)
         {
           printf("%d ",c[i][j]);
         }
         printf("\n");
       }
    }
   else
     printf("Multiplication is not possible because column of 1st matrix is not equal to rows of 2nd matrix.\nTry with another matrix.");
}
