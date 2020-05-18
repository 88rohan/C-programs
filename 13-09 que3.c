#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,m,k=0;
    printf("How many students in class: ");
    scanf("%d",&n);
    printf("Write the marks obtained by students:\n");
    printf("  Roll no.\tMarks\n");
    for(i=1;i<=n;i++)
      {
         printf("    %d",i);
         printf("\t\t");
         scanf("%d",&m);
         if(m>=50)
           printf(" Remark:\tPass\n");
         else
           printf(" Remark:\tFail\n");
      }
}