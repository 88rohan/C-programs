#include<stdio.h>
int *array(int []);
int main()
{
  int a[10],i;
  int *ptr=a;
  printf("Enter 10 elements for array: ");
  for(i=0;i<10;i++)
    scanf("%d",&a[i]);
  ptr=array(a);
  printf("\nNew array is:\n");
  for(i=0;i<10;i++)
  {
    printf("%d ",ptr[i]);
  }
  return 0;
}
int *array(int a1[])
{
  int i,n,m;
  printf("\nArray is:\n");
  for(i=0;i<10;i++)
    printf("%d ",a1[i]);
    printf("\n");
    printf("Enter the place of array(0-9) and value which you want to change = ");
    scanf("%d %d",&n,&m);
  a1[n]=m;
  return a1;
}
