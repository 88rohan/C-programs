#include<stdio.h>
int main()
{
    int a[10],i,s=0;
    int *p;
    p=&a;
    printf("Enter the elements of array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d ",&a[i]);
        s=s+*p;
        p=(p+1);
    }
    printf("Sum = %d",s);
    return 0;
}
