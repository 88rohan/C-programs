#include<stdio.h>
void series();
void main()
{
 printf("  Increasing and decreasing series is :\n");
 series();
}
void series()
{
  int i=1,j=10;
  do
  {
    printf("\t%d  %d\n",i,j);
    i++;
    j--;
  }
  while(i!=11&&j!=0);
}
