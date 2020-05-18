#include<stdio.h>
#include<conio.h>
int main()
{
    int i,s=0;
    clrscr();
    printf("Numbers divisible by 7 between 100 to 200 are :\n");
    for(i=100;i<=200;i++)
    {
        if(i%7==0)
        {
          printf("%d ",i);
            s=s+i;}
    }
    printf("\n\nSum of the numbers = %d",s);
    return 0;
}