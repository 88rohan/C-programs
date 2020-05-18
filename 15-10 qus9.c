#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("Enter the range for prime numbers: ");
    scanf("%d",&n);
    printf("\nPrime numbers from 1 to %d are :-\n\n",n);
    for(i=1;i<=n;i++)
      {
        int f=0;
        for(j=1;j<=i;j++)
         {
           if(i%j==0)
            f++;
         }
         if(f==2)
          printf("%d ",i);
       }    
}