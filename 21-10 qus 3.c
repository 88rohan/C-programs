#include<stdio.h>
int array(int [], int[]);
int main()
{
  int i,a[3]={1,2,3},c;
  int b[3]={9,5,6};
  printf("First array is :\n");
  for(i=0;i<3;i++)
     printf("%d ",a[i]);
  printf("Second array is :\n");
  for(i=0;i<3;i++)
     printf("%d ",b[i]);
  printf("\n");
  printf("New array is:\n");
  for(i=0;i<3;i++)
    {
      if(i==3/2)
       printf("%d %d",a[i],b[i]);
    }
  return 0;
}
