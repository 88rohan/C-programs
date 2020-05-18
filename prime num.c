#include<stdio.h>
#include<conio.h>
int main()
{
    int n,f=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
         if(n%i==0)
          f++;
       }
         if(f==2)
          printf("\n%d is a prime number.",n);
        else
          printf("\n%d is not a prime number.",n);
        
}