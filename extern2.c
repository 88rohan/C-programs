#include<stdio.h>
void main()
{
  extern int a;
  printf("%d",a);
}
int a=10;
