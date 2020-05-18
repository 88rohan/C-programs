#include<stdio.h>
#include<conio.h>
int main()
{
    int n; 
    clrscr();
    printf("Enter the size of array = ");
    scanf("%d",&n);
    int a[n],i,s=0,m=0,b;
    printf("Enter the array :\n");
    for(i=0;i<n;i++)
      { 
        printf("Enter %dth element = ",i);
        scanf("%d",&a[i]);
      }
    printf("\nThe array is :\n");
    for(i=0;i<n;i++)
      {
        printf("%d\t",a[i]);
      }
    printf("\nEnter the position number from where you want to rotate = ");
    scanf("%d",&b);
    for(i=b;i<n;i++)
      {
         printf("%d\t",a[i]);
      }
    for(i=0;i<b;i++)
      {
         printf("%d\t",a[i]);
      }
    return 0;
}