#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,s,m,j;
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
    for(i=0;i<10;++i)
      {
         for(j=i+2;j<10;j=j+2)
          {
            if(i%2==0)
             {
               if(a[i]>a[j])
                {
                   s=a[i];
                   a[i]=a[j];
                   a[j]=s;
                }
             }
            else
             {
                if(a[i]<a[j])
                 {
                    m=a[i];
                    a[i]=a[j];
                    a[j]=m;
                 }
             }
          }
       }
    printf("\nArray of even placed in assending order :\n");
    for(i=0;i<10;i=i+2)
       printf("%d\t",a[i]);
    printf("\nArray of odd placed in decending order :\n");
    for(i=1;i<10;i=i+2)
       printf("%d\t",a[i]);
    return 0;
}