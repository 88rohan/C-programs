#include<stdio.h>
void array(int []);
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
    array(a);
    printf("\nThe new array is:\n");
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
}
void array(int x[])
{
    int i;
    for(i=0;i<5;i++)
    {
        if(x[i]==2&&x[i+1]==3)
        {
            x[i+1]=0;
        }
    }
}
