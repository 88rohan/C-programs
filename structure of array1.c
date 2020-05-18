#include<stdio.h>
#include<string.h>
struct student
{
  char name[10];
  int roll,age;
  float m1,m2,m3,m4,m5,total,avg;
};
void main()
{
  struct student s1[3];
  int i;
  for(i=0;i<3;i++)
  {
    printf("Enter names of student: ");
      fflush(stdin);
      gets(s1[i].name);
    printf("Enter roll number: ");
      scanf("%d",&s1[i].roll);
    printf("Enter age : ");
      scanf("%d",&s1[i].age);
    printf("Enter marks : ");
      scanf("%f%f%f%f%f",&s1[i].m1,&s1[i].m2,&s1[i].m3,&s1[i].m4,&s1[i].m5);
    printf("\n");
  }
  printf("Students details are:\n");
  printf("Name\tRoll no.\tAge\tMarks\tTotal\tPercentage\n");
    for(i=0;i<3;i++)
    {
      printf("%d ",++i);
      printf("\t%s ",s1[i].name);
      printf("\t%d ",s1[i].roll);
      printf("\t\t%d ",s1[i].age);
      printf("\t%.2f\n\t\t\t\t%.2f\n\t\t\t\t%.2f\n\t\t\t\t%.2f\n\t\t\t\t%.2f",s1[i].m1,s1[i].m2,s1[i].m3,s1[i].m4,s1[i].m5);
      s1[i].total=s1[i].m1+s1[i].m2+s1[i].m3+s1[i].m4+s1[i].m5;
      s1[i].avg=s1[i].total/5;
      printf("\t%.2f ",s1[i].total);
      printf("\t%.2f%% \n",s1[i].avg);
    }
}
