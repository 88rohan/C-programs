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
  int i;
  struct student s1[3];
  struct student *ptr=s1;
  ptr=display();
  for(i=0;i<3;i++)
  {
    printf("%d  %s  %.2f",ptr->roll,ptr->name,ptr->marks);
    printf("\n");
    ptr++;
  }
}
struct student *display()
{
  int i;
  static struct student s[3];
  for(i=0;i<3;i++)
  {
      printf("Enter roll mnumber :");
      scanf("%d",&s[i].roll);
      printf("Enter name :");
      fflush(stdin);
      gets(s[i].name);
      printf("Enter marks :");
      scanf("%f",&s[i].marks);
  }
  for(i=0;i<3;i++)
    printf("%d  %s  %.2f\n",s[i].roll,s[i].name,s[i].marks);
  return &s;
}
