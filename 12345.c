#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        int k=1;
        for(j=0;j<=i;j++)
        {
            printf("%d ",k);
             k++;
        }
        printf("\n");
    }
}
