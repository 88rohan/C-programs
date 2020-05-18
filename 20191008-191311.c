#include<stdio.h>
#include<conio.h>
int main()
{
    int n,f=0,i,j;
    printf("Prime numbers between 50 to 500 are:\n");
    //scanf("%d",&n);
    for(i=50;i<=500;i++)
      { 
         for(j=1;j<=10;j++)
           {
             if(i%j==0)
              f=f+1;
            
        }
       
         if(f==2)
          printf("%d ",i);
        
        
        /*else
          printf("\n%d is not a prime number.",n);*/
   }     
}