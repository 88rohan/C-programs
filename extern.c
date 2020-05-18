#include<stdio.h>
int main()
//extern int a;
//extern void get();
//int main()
{
    extern int a;
    printf("%d",a);
    //get();
    return 0;
}
int a=10;

