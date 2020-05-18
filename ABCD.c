#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        char ch=65;
        for(j=0;j<=i;j++)
        {
            printf("%c ",ch);
             (ch)++;
        }
        printf("\n");
    }
}
