#include<stdio.h>
int main()
{
    int a,i;
    float j;
    printf("Enter number for cuberoot = ");
    scanf("%d",&a);
    for(i=1;i>0;)
      {
        j=i*i*i;
        i++;
        if(j==a)
          {
            printf("Cuberoot of %d = %d",a,i);
            break;
           }
        else
          {
            printf("%d is not a perfect cube.\n",a);
            printf("Try with another perfect cube.");
            break;
          }
      }
    return 0;
}
