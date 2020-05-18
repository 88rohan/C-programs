/*check and print identity matrix for given matrix*/
#include<stdio.h>
void main()
{
  int r,c;
  printf("Enter order of matrix(r c) : ");
  scanf("%d %d",&r,&c);
  int a[r][c],i,j,s=0;
  printf("Enter %d elements for matrix : ",r*c);
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        printf(" %d",a[i][j]);
    }
    printf("\n");
  }
  printf("Checking the identity of matrix :\n");
  if(r==c)          //checking condition of square matrix
  {
      for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j)
                {
                  if(a[i][j]==1)
                  s++;
                }
                else
                {
                  if(a[i][j]==0)
                  s++;
                }
            }
        }
        if(s==r*c)      //checking condition for identity
           printf("\nGiven matrix is Identity matrix.");
        else
           printf("\nGiven matrix is not a Identity matrix.\n\nIdentity matrix for given matrix is :\n");
        for(i=0;i<r;i++)
        {
          for(j=0;j<c;j++)
            {
               if(i==j)
               {
                 if(a[i][j]!=1)
                   a[i][j]=1;
               }
               else
               {
                 if(a[i][j]!=0)
                   a[i][j]=0;
               }
             }
        }
    if(s!=r*c)      //checking condition again for identity
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf(" %d",a[i][j]);
            }
            printf("\n");
        }
    }
  }
  else
  {
    printf("\nHere, given matrix is not a square matrix. So, it's identity is not possible.");
    printf("\nTry with a square matrix.");
  }
}
