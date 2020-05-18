#include<stdio.h>
void get();
int main()
{
  int i;
  for(i=0;i<5;i++)
    get();
}
void get()
{
  static int a=10;
  a++;
  printf("%d ",a);
}
