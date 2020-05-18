#include<stdio.h>
#include<string.h>
struct student
{
  int roll;
  char *name[20];
  float marks;
};
void display( );
int main()
{
  struct student s;
  printf("Enter name : ");
  gets(s.name);
  printf("Enter roll no. : ");
  scanf("%d",&s.roll);
  printf("Enter marks : ");
  scanf("%f",&s.marks);
  display(s);
  printf("\nBefore correction :\n");
  printf("%s %d %.2f",s.name,s.roll,s.marks);
}
void display(struct student s1)
{
  printf("\nEnter correct marks : ");
  scanf("%f",&s1.marks);
  printf("\nAfter correction :\n");
  printf("%s %d %.2f\n",s1.name,s1.roll,s1.marks);
}
