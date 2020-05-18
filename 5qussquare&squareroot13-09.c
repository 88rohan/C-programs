#include<stdio.h>
int main()
{
    int a,S;
    float R;
    printf("Enter a integer = ");
    scanf("%d",&a);
    S=a*a,R=sqrt(a);
    printf("Square of %d is %d.\n",a,S);
    printf("Square root of %d is %.3f.",a,R);
    return 0;
}
