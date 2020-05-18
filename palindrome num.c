#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,s=0,x;
   // clrscr();
    printf("Enter a number : ");
    scanf("%d",&n);
    x=n;
    while(x!=0)
      {
        r=x%10;
        s=s*10+r;
        x=x/10;
    }
    if(s==n)
       printf("%d is a palindrome.",n);
    else
       printf("%d is not a palindrome.",n);
    return 0;
}
