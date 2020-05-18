#include<stdio.h>
//#include<conio.h>

int main()
{
    int a[10],i;
   printf("Enter tha array:\n ");
  for(i=0;i<10;i++)
   {
        printf("Enter %dth element = ",i);
        scanf("%d",&a[i]);
        }
     printf("The array is :\n");
    for(i=0;i<10;i++)
    {
      printf("%d\t",a[i]);
    }
    printf("\nLast two elements of array :\n");
    for(i=0;i<10;i++)
     {
        if(i>7)
       printf("%d\t",a[i]);
    }
   // getch();
    return 0;
 }
