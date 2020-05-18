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
    printf("Your array is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    int z=array(a);
    printf("\nResult = ");
    if(z==1)
        printf("False");
    else
        printf("True");
}
int array(int x[])
{
    int r,i;
    for(i=0;i<5;i++)
    {
        if(x[i]==2||x[i]==3)
        {
            r=1;
        }
    }
    return r;
}
