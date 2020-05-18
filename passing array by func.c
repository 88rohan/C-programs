#include<stdio.h>
void sum(int []);
void main()
{
  int a[] = {10,20,30,40,50},i;
  printf("Before change of value :\n");
  sum (a);
  printf("\nAfter change of value :\n");
  for(i=0;i<5;i++)
    printf("%d ",a[i]);
}
void sum(int b[])
{
  int i; 
  for(i=0;i<=4;i++)
     printf("%d ",b[i]);
    b[2] =500;
    printf("\n");
}