#include<stdio.h>
int array();
void main()
{
  int i,*a;
   a = array();
  for(i=0;i<5;i++)
    {
      printf("%d ",a[i]);
    }
}
int array()
{
  static int a[5]={10,20,33,44,55};
  return a;
}
