#include<stdio.h>
typedef struct PP
{
    int x,y;
}k;
int main()
{
    struct PP P={1,2} ;
    k K1 = P;
    printf("%d",K1.x);
}
