#include<stdio.h>
void main()
{
    int r1,r2,c1,c2,i,j,k;
    printf("Enter 1st matrixs order : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter 2nd matrixs order : ");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1],b[r2][c2],c[r1][c2];
    printf("Enter %d elements of 1st matrix : ",r1*c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter %d elements of 2nd matrix : ",r2*c2);
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
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
        printf("\nResult of multiplication of matrix is :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
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
}
