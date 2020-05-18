#include<stdio.h>
#include<string.h>
struct student
{
  int roll;
  char name[20];
  float marks;
};
struct student *display();
int main()
{
  struct student *s1;
  s1=display();
  printf("%d  %s  %.2f",s1->roll,s1->name,s1->marks);
}
struct student *display()
{
  static struct student s;
  printf("Enter roll mnumber :");
  scanf("%d",&s.roll);
  printf("Enter name :");
  fflush(stdin);
  gets(s.name);
  printf("Enter marks :");
  scanf("%f",&s.marks);
  printf("%d  %s  %.2f",s.roll,s.name,s.marks);
  return &s;
}
