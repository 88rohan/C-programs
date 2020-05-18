#include<stdio.h>
int array(int []);
int main()
{
    int i,a[5];
    printf("Enter the elements of array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    int z=array(a);
    if(z==1)
        printf("\nTrue");
    else
        printf("\nFalse");
}
int array(int x[])
{
    int r;
    if(x[0]==6||x[4]==6)
    {
        r=1;
    }
    return r;
}
