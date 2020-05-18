#include<stdio.h>
#include<stdlib.h>
void sort(float *,int*);
int main()
{
    int n,i,m;
    printf("Enter total number of elements in array : ");
    scanf("%d",&n);
    float *ptr,s=0;
    ptr=(float*) calloc (n,n*sizeof(float));
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
            scanf("%f",ptr+i);
            s=s+*(ptr+i);
        }
        printf("Sum of the elements = %.2f",s);
    }
    printf("\nEnter new size for array : ");
    scanf("%d",&m);
    realloc(ptr,m*sizeof(float));
    if(ptr==NULL)
    {
        printf("Memory is not allocated.");
        exit(1);
    }
    else
    {
        s=0;
        printf("\nNew memory is allocated.\nEnter the elements of new array : ");
        for(i=0;i<m;i++)
        {
            scanf("%f",ptr+i);
            s=s+*(ptr+i);
        }
        printf("New sum of the elements = %.2f",s);
    }
    sort(ptr,&m);
    printf("\n\nAcending order of array is :\n\n");
    for(i=0;i<m;i++)
        {
            printf("%.2f ",*(ptr+i));
            //s=s+*(ptr+i);
        }
    free(ptr);
    return 0;
}
void sort(float *p,int *n)
{
    int i,rd;
    float t;
    for(rd=1;rd<*n;rd++)
    {
        for(i=0;i<*n-rd;i++)
        {
            if(*(p+i)>*(p+i+1))
            {
                t=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=t;
            }
        }
    }
}
