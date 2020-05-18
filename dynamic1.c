#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,n,s=0;
    printf("Enter total number of elements in array : ");
    scanf("%d",&n);
    ptr=(int*) malloc (n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory is not allocated.");
        exit(1);
    }
    else
    {
        printf("Memory is allocated.\nEnter the elements of array : ");
        for(i=0;i<n;i++)
        {
            scanf("%d",ptr+i);
            s=s+*(ptr+i);
        }
        printf("Sum of the elements = %d",s);
    }
    free(ptr);
    return 0;
}
