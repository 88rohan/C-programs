#include<stdio.h>
#include<string.h>
struct student
{
  int roll;
  char *name[20];
  float marks;
};
void display(struct student *);
int main()
{
  struct student s;
  printf("Enter name : ");
  gets(s.name);
  printf("Enter roll no. : ");
  scanf("%d",&s.roll);
  printf("Enter marks : ");
  scanf("%f",&s.marks);
  display(&s);
  printf("\nAfter correction :\n");
  printf("%s %d %.2f",s.name,s.roll,s.marks);

}
void display(struct student *s1)
{
  printf("\nBefore correction :\n");
  printf("%s %d %.2f",s1->name,s1->roll,s1->marks);
  s1->marks=99;
  printf("\n\nCorrect marks = %.2f\n",s1->marks);
}
