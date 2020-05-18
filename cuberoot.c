#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,j;
    clrscr();
    printf("Enter number for cuberoot = ");
    scanf("%d",&a);
    for(i=1;i>0;i++)
      {
        j=i*i*i;
        if(j==a)
          {
            printf("Cuberoot of %d = %d",a,i);
            break;
           }
        if(j!=a)
          {
            printf("%d is not a perfect cube.\n",a);
            printf("Try with another perfect cube.");
            break;
          }
      }
    return 0;
}