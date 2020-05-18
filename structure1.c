#include<stdio.h>
struct student
{
  char name[20];
  int roll;
  float m1,m2,m3;
  float avg;
};
void main()
{
  struct student s1;
  printf("Enter name of student : ");
  scanf("%s",&s1.name);
  printf("Enter roll no. : ");
  scanf("%d",&s1.roll);
  printf("Enter marks : ");
  scanf("%f %f %f",&s1.m1,&s1.m2,&s1.m3);
  s1.avg = (s1.m1+s1.m2+s1.m3)/3;
  printf("Average of marks = %.2f",s1.avg);
  printf("\nDetails of %s is:\n",s1.name);
  printf("%s %d %.2f %.2f %.2f ",s1.name,s1.roll,s1.m1,s1.m2,s1.m3);
}
