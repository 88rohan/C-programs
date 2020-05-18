#include<stdio.h>
void main()
{
  int a[3][3][3] = {{1,2,3},{4,5,6},{7,8,9}},i,j,k;
   printf("The 3D array is:\n");
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
      {
        for(k=0;k<3;k++)
           printf("%d ",a[i][j][k]);
           printf("\n");
      }
     printf("\n");
   }
}
