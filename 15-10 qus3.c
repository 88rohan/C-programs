#include<stdio.h>
#include<conio.h>
int main()
{
    long int n;
    printf("Enter a number = ");
    scanf("%ld",&n);
    printf("The absolute value of %ld is:\n",n);
    if(n>=0)
       printf("|%ld| = %ld",n,n);
    else
       printf("|%ld| = %ld",n,-n);
}