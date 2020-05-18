#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i,c,b;
    //clrscr();
    printf("Enter the array :\n");
    for(i=1;i<=5;i++)
      {
        printf("Enter %dth element = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe array is :\n");
    for(i=1;i<=5;i++)
      {
        printf("%d\t",a[i]);
      }
    printf("\n\nEnter the place no. by where you want to insert a new element = ");
    scanf("%d",&c);
    printf("\nEnter the element = ");
    scanf("%d",&b);
    for(i=1;i<=5;i++)
      {
        // printf("%d\t",a[i]);
         if(i==c)
           a[i]=b;
         printf("%d\t",a[i]);
      }
    return 0;
}
