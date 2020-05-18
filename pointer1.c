#include<stdio.h>
int main()
{
  int a;
  int *ptr;//pointer
  int **ptr1;//double pointer
  ptr=&a;
  ptr1=&ptr;
  printf("Enter a integer : ");
  scanf("%d",&a);
  printf("\nResults using pointer are :\n");
  printf("\tValue of a (directly) = %d",a);
  printf("\n\tAddress of a (by &a) = %d",(&a));  //address of value
  printf("\n\tAddress of a (by pointer) = %u",ptr);  //address of pointer
  printf("\n\tIncrement in a (by *ptr++) = %d",(*ptr)++);
  printf("\n\tAddress of pointer (by &ptr) = %u",(&ptr));
  printf("\n\tValue of current a (by **ptr1) = %u",**ptr1);   //value by double pointer
  printf("\n\tValue of a (by pointer) = %d",*ptr);
  printf("\n\tAdd '1' in pointer address (by ptr+1) = %u",(ptr)+1);
  printf("\n\tAddress of double pointer (by &ptr1) = %u",(&ptr1));
  return 0;
}
