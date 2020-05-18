#include<stdio.h>
#include<string.h>
struct student
{
  char name[20];
  int roll;
  float marks;
} ;
void main()
{
    int i;
  struct student s[2];
  for( i=0;i<2;i++)
  {
  printf("Name :- ");
  fflush(stdin);  // clear the buffer
  gets(s[i].name);
  printf("Roll no. :- ");
  scanf("%d",&s[i].roll);
  printf("Marks :- ");
  scanf("%f",&s[i].marks);
  }
  for( i=0;i<2;i++)
  printf("\n%s  %d  %.2f",s[i].name,s[i].roll,s[i].marks);

  printf("\nSize = %d",sizeof(s));
}
