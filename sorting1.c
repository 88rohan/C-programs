#include<stdio.h>
int main()
{
    int m,n,i,j,t,f;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter elements of array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
            }
        }
    }
    printf("\nArray in ascending order :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
            }
        }
    }
    printf("\n\nArray in decending order :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the number you want to search : ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
            f=1;
        }
        else
            f=0;
    }
    if(f==1)
        printf("Found");
    else
        printf("Not");
}


