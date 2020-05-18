#include<stdio.h>
#include<conio.h>

int main()
{
   int i,n,m,j,s;
    clrscr();
    printf("Multiples of 4 are :\n");
   for(i=1;i<=100;i++)
     { 
        if(i%4==0)
        { n=i;
          printf("%d\t",n);}
    }
     printf("\n\nMultiples of 6 are :\n");
   for(j=1;j<=100;j++)
     { 
        if(j%6==0)
        { m=j;
          printf("%d\t",m);}
    }
    printf("\n\nThe common factors are:\n");
    
    /*for(i=1,j=1;i<=100,j<=100;i++,j++)
     {
        //for(j=1;j<=100;j++)
          
           if(i%4==0)
             n=i*4;
          if(j%6==0)
             m=j;
            }*/
           if(n=m)
           { 
             printf("%d\t",n);
           }
        
    
    getch();
    return 0;
 }