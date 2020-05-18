#include<stdio.h>
void main()
{
  int a[2][2][2],i,j,k;
  printf("Enter eight elements of 3D array: ");
  for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
     {
       for(k=0;k<2;k++)
          {
            scanf("%d",&a[i][j][k]);
          }
     }
   }
   printf("The 3D array is:\n");
   for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
      {
        for(k=0;k<2;k++)
         {
           printf("%d ",a[i][j][k]);
         }
         printf("\n");
      }
     printf("\n");
   }
}
