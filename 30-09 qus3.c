#include<stdio.h>
int main()
{
    int n,i;
    float avg,s=0; 
    printf("Enter the numbers:\n" );
    for(i=1;i>0;i++)
      {
         scanf("%d",&n);
          if(n==9999)
            break;
          s=s+n;
       }
    avg= s/(i-1);
      printf("Average of these numbers = %.2f",avg);
}