#include<stdio.h>
float sum(int,int);
float sub(int,int);
float mul(int,int);
float div(int,int);
int main()
{
  static int a,b;
  float r;
  printf("Enter two integers : ");
  scanf("%d %d",&a,&b);
  printf("\nArithmetic operations are :\n");
  r=sum(a,b);
  printf("Addition = %.f\n",r);
  r=sub(a,b);
  printf("Subtraction = %.f\n",r);
  r=mul(a,b);
  printf("Multiplication = %.f\n",r);
  r=div(a,b);
  printf("Division = %.2f\n",r);
  return 0;
}
float sum(int x,int y)
{
  float r=x+y;
  return r;
}
float sub(int x,int y)
{
  float r=x-y;
  return r;
}
float mul(int x,int y)
{
  int r=x*y;
  return r;
}
float div(int x,int y)
{
  float r=(float)x/y;
  return r;
}
