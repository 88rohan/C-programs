#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i;
    clrscr();
    printf("Enter the array :\n");
    for(i=0;i<10;i++)
      { 
        printf("Enter %dth element = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe array is :\n");
    for(i=0;i<10;i++)
      {
        printf("%d\t",a[i]);
    }
    printf("\n\nReverse of array is :\n");
    for(i=9;i>=0;i--)
      {
        printf("%d\t",a[i]);
        
    }
    return 0;
}