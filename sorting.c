#include<stdio.h>
int sort(int [],int);
int main()
{
    int n,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter elements of array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
}
int sort(int ar[],int x)
{
    int i,j,t;
    for(i=0;i<x-1;i++)
    {
        for(j=0;j<x-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
        }
    }
    printf("\nArray in assending order is :\n");
    for(i=0;i<x;i++)
    {
        printf("%d ",ar[i]);
    }
}
