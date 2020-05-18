#include<stdio.h>
void main()
{
  int r,c;
  printf("Enter order of matrix(r c) : ");
  scanf("%d %d",&r,&c);
  int a[r][c],i,j,s=0,v=0;
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
   printf("\nSum of major diagonal of matrix is:");
   for(i=0,j=0;i<r,j<c;i++,j++)
   {
     if(i==j)
       s=s+a[i][j];
   }
   printf(" %d",s);
   printf("\n\nSum of minor diagonal of matrix is:");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
            if(i+j==(r-1))
              v=v+a[i][j];
       }
   }
   printf(" %d",v);
}
