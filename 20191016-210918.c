#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,n;
    float s=0;
    clrscr();
    printf("Enter the last term of a harmonic motion = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      { 
        if(i==1)
        printf(" %d +",i);
        else if(i<n)
         printf(" 1/%d + ",i);
        if(i==n)
          printf("1/%d",i);
       }
     for(i=1;i<=n;i++)
       {
         float k; 
         k=1/i;
         s=s+k;
       }
    printf("\n%f",s);
    getch();
}