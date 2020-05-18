#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=0,i; 
    printf("The series is:\n");
    printf("%d %d ",a,b);
    for(i=1;i<=6;i++)
      {
        a=a+1;
        b=b+3;
        printf("%d ",a);
        printf("%d ",b);
    }
}