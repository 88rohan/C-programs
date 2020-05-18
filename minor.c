#include<stdio.h>
void main()
{
  int a[3][3],i,j,s=0;
  printf("Enter the elements of 3*3 matrix: ");
  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
       scanf("%d",&a[i][j]);
   }
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       printf("%d ",a[i][j]);
     }
     printf("\n");
   }
   printf("Sum of minor diagonal of matrix is:");
   int r=3,c=3;
   for(i=0,j=c-1;i<r,j>=0;i++,j--)
   {
       s=s+a[i][j];
   }
   printf(" %d",s);
}
