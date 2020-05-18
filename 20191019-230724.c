#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i,c,d,b[5];
    clrscr();
    printf("Enter the array :\n");
    for(i=0;i<5;i++)
      { 
        printf("Enter %dth element = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe array is :\n");
    for(i=0;i<5;i++)
      {
        printf("%d\t",a[i]);
      }
    printf("Enter another array :\n");
    for(i=0;i<5;i++)
      {
        printf("Enter %dth element = ",i);
        scanf("%d",&b[i]);
      }
    printf("\nThe 2nd array is :\n");
    for(i=0;i<5;i++)
      {
        printf("%d\t",b[i]);
      }
    printf("Mearzed array is :\n");
    for(i=0;i<5;i++)
      {
        printf("%d  ",a[i],b[i]);
        printf("%d  ",b[i]);
      }
    printf("Enter the place no. by where you want to insert a new element = ");
    scanf("%d",&c);
    printf("Enter the element = ");
    scanf("%d",&d);
    for(i=0;i<5;i++)
      {
         if(i==c) 
           a[i]=d;
         printf("%d\t",a[i]);
      }
    return 0;
}