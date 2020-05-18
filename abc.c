#include<stdio.h>
void main()
{
    int i,j;
    char ch=65;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",ch);
             (ch)++;
        }
        printf("\n");
    }
}
