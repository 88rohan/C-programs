#include<stdio.h>
int array(int [],int[]);
int main()
{
    int i,a[5],b[5];
    printf("Enter the elements of First array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your First array is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the elements of Second array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Your Second array is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
    int z=array(a,b);
    printf("\nResult = ");
    if(z==1)
        printf("True");
    else
        printf("False");
}
int array(int x[],int y[])
{
    int r;
    if(x[0]==y[0]||x[4]==y[4])
    {
        r=1;
    }
    return r;
}
