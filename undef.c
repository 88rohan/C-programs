#include<stdio.h>
#define num 15
int square=num * num;
#undef num
main()
{
    printf("Square of 15 = %d",square);
}
