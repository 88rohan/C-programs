#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    float avg=0; 
    printf("How many numbers you want to enter :");
    scanf("%d",&n);
    int i, a[i];
    printf("The array are:\n");
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
    for(i=0;i<n;i++)
     {
        if(a[i]<0)
          continue;
          avg=avg+a[i];
     }
    printf("Average of these numbers = %.1f",avg/n);
}