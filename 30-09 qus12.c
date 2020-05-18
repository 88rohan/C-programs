#include<stdio.h>
#include<conio.h>
int main()
{
    int i; 
    printf("The table are; \n");
    printf("A\tA+2\tA+4\tA+6\n");
    printf("---------------------------\n");
    for(i=1;i<=15;i++)
      {
         if(i%3==0)
         printf("%d\t%d\t%d\t%d\n",i,i+2,i+4,i+6);
      }
}