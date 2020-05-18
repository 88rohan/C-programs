#include<stdio.h>
float divide(int,float,int);
int main()
{
  int a=30,b=10,r;
  float c=1/2;
  r=divide(a,b,c);
  printf("Result = %d",r);
  return 0;
}
float divide(int x,float y,int z)
{
  float d;
  d=(x/z+y);
  return d;
}
