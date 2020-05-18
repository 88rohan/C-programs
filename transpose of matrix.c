#include<stdio.h>
void main()
{
  int r,c;
  printf("Enter the order of matrix : ");
  scanf("%d %d",&r,&c);
  int a[r][c],i,j;
  printf("Enter the elements of %d matrix: ",r*c);
  for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
       scanf("%d",&a[i][j]);
   }
   for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
     {
       printf("%d ",a[i][j]);
     }
     printf("\n");
   }
   printf("Transpose of matrix is:\n");
   for(i=0;i<c;i++)
   {
     for(j=0;j<r;j++)
     {
       printf("%d ",a[j][i]);
     }
     printf("\n");
   }
}
