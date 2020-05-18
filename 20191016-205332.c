#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int b[6]={5,9,8,4,7,3};
    int i,j;
    clrscr();
    printf("First array is :\n"); 
    for(i=0;i<5;i++)
      {
        printf("%d\t",a[i]);
      }
    printf("\nAnother array is :\n");
    for(j=0;j<6;j++)
      {
        printf("%d\t",b[j]);
      }
    for(i=0,j=0;i<5,j<6;i++,j++)
      {
         if(a[i]>b[j])
           printf("%d ",a[i]);
        else
          printf("%d ",b[j]);
         /*if(a[i]<b[j])
           {
              int t;
              t=a[i];
              a[i]=b[j];
              b[j]=t;
              printf("%d ",a[i]);
              printf("%d ",b[j]);
           }*/
      }
    return 0;
}