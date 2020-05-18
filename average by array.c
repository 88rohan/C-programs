#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("How many numbers you want to enter :");
    scanf("%d",&n);
    int a[n],i;
    float avg=0;
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
     {
        if(a[i]<0)
          {
            a[i]==0;
            avg=avg+a[i];
        }
        else
           avg=avg+a[i];
    }
    printf("Average of these numbers = %.1f",avg/n);
}