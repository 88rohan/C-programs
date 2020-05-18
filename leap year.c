#include<stdio.h>
int main()
{
    int n;
    printf("Enter year : ");
    scanf("%d",&n);
    if(n%4==0)
        printf("Leap year");
    else
        printf("Not leap year");
    return 0;
}
