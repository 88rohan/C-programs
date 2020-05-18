#include<stdio.h>
void swap(int,int);
void swap1(int *,int *);
int main()
{
  int a,b;
  printf("Enter two number : ");
  scanf("%d%d",&a,&b);
  printf("Numbers before swapping \n");
  printf("1st number : %d",a);
  printf("\n2nd number : %d",b);
  swap(a,b);
  swap1(&a,&b);
  return 0;
}
void swap(int x,int y)
{
  x=x+y;
  y=x-y;
  x=x-y;
  printf("\n\nAfter swapping by value\n");
  printf("1st number : %d",x);
  printf("\n2nd number : %d",y);
}
void swap1(int *x,int *y)
{
   int a,b,t;
   t=*x;
   *x=*y;
   *y=t;
   printf("\n\nAfter swapping by reference\n");
   printf("1st number : %d",a);
   printf("\n2nd number : %d",b);
}
