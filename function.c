#include<stdio.h>
float sum (float, float);
float sub (float, float);
float div (float, float);
float mul (float, float);
int main()
{
  float a,b,c,d,e,f,g,h;
  float (*p1)(float, float);
  float (*p2)(float, float);
  float (*p3)(float, float);
  float (*p4)(float, float);
  p1=sum;
  p2=sub;
  p3=mul;
  p4=div;
  printf("Arithmetic Operations :\n");
  printf("\tEnter values for addition : ");
  scanf("%f %f",&a,&b);
  float r1 = p1(a,b);
  printf("\n\tEnter values for subtration : ");
  scanf("%f %f",&a,&b);
  float r2 = p2(a,b);
  printf("\n\tEnter values for multiplication : ");
  scanf("%f %f",&a,&b);
  float r3 = p3(a,b);
  printf("\n\tEnter values for division : ");
  scanf("%f %f",&a,&b);
  float r4 = p4(a,b);
  printf("\nThe results for :\n");
  printf("\tAddition  = %.2f",r1);
  printf("\n\tDifference = %.2f",r2);
  printf("\n\tMultiplication = %.2f",r3);
  printf("\n\tDivision = %.2f",r4);
  return 0;
}
float sum(float a,float b)
{
  return (a+b);
}
float sub(float a,float b)
{
  return (a-b);
}
float mul(float a,float b)
{
  return (a*b);
}
float div(float a,float b)
{
  return (a/b);
}
