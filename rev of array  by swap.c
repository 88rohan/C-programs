#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,s=0,m=0;
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
    printf("\n\nThe reverse array by swapping is:\n");
    for(i=0;i<10;i++)
      {
         int t;
         if(i>=5)
           printf("%d\t",a[i]);
        else
         {
          t=a[i];
          a[i]=a[9-i];
          a[9-i]=t;
          printf("%d\t",a[i]);
         }
      }
    return 0;
}