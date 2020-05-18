#include<stdio.h>
#include<conio.h>
int main()
{
    int i; 
    printf("The table are; \n");
    printf("N\tN*10\tN*100\tN*1000\n");
    printf("------------------------------\n");
    for(i=1;i<=10;i++)
      {
         printf("%d\t%d\t%d\t%d\n",i,i*10,i*100,i*1000);
      }
}