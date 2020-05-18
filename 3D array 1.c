#include<stdio.h>
void main()
{
  int a[3][3][3] = {{{1,2,3},{4,5,6},{7,8,9}},{{0,11,22},{33,44,55},{66,77,88}},{{99,111,222},{333,444,555},{666,777,888}}},i,j,k;
   printf("The 3D array is:\n");
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
      {
        for(k=0;k<3;k++)
         {
           printf("%d ",a[i][j][k]);
         }
         printf("\n");
      }
     printf("\n");
   }
}
