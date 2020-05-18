#include<stdio.h>
int main()
{
    char a[100],ch=65;
    int n,r,x,d,i=0,k,A,B,C,D,E,F;
    printf("Enter a number in decimal : ");
    scanf("%d",&n);
    x=n;
        do
        {
           d=x/16;
           r=x%16;
           x=d;
           if(r>9)
           {
               a[i]=(ch+(r-10));
           }
           else
             a[i]=r;
           k=i++;
        }
       while(x!=0);
       printf("\nHexadecimal value of %d = ",n);
    for(i=k;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
