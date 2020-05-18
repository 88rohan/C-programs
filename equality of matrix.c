#include<stdio.h>
void main()
{
    int r1,r2,c1,c2;
    printf("Program for chacking of equality of two matrices :\n");
    printf("Enter order of first matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter order of second matrix : ");
    scanf("%d %d",&r2,&c2);
    int a[r1][c1],b[r2][c2],i,j,r;
    if(r1==r2&&c1==c2)
    {
        printf("Enter elements of first matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf(" %d",&a[i][j]);
            }
        }
        printf("Enter elements of second matrix:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf(" %d",&b[i][j]);
            }
        }
        printf("First matrix is:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf(" %d",a[i][j]);
            }
            printf("\n");
        }
        printf("Second matrix is:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf(" %d",b[i][j]);
            }
            printf("\n");
        }
        int k=0;
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                if(a[i][j]==b[i][j])
                    k++;
            }
        }
        if(k==r2*c2)
            printf("\nBoth matrices are equal.\n");
        else
            printf("\nBoth matrices are not equal.\n");
    }
    else
      printf("\nCan't check equality because order of matrices are not equal");
}
