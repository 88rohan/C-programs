#include<stdio.h>
struct student
{
  char name[10];
  int roll,age;
  float m1,m2,m3,m4,m5,total,avg;
};
void main()
{
  int i,n;
  printf("Enter the number of students : ");
  scanf("%d",&n);
  struct student s1[n];
  for(i=0;i<n;i++)
  {
    printf("Enter names of student: ");
      scanf("%s",&s1[i].name);
    printf("Enter roll number: ");
      scanf("%d",&s1[i].roll);
    printf("Enter age : ");
      scanf("%d",&s1[i].age);
    printf("Enter marks : ");
      scanf("%f%f%f%f%f",&s1[i].m1,&s1[i].m2,&s1[i].m3,&s1[i].m4,&s1[i].m5);
  }
  printf("Students details are:\n");
  printf("Name\tRoll no.\tAge\tMarks\tTotal\tPercentage\n");
    for(i=0;i<n;i++)
    {
      printf("%s ",s1[i].name);
      printf("\t%d ",s1[i].roll);
      printf("\t\t%d ",s1[i].age);
      printf("\t%.2f\n\t\t\t\t%.2f\n\t\t\t\t%.2f\n\t\t\t\t%.2f\n\t\t\t\t%.2f",s1[i].m1,s1[i].m2,s1[i].m3,s1[i].m4,s1[i].m5);
      s1[i].total=s1[i].m1+s1[i].m2+s1[i].m3+s1[i].m4+s1[i].m5;
      s1[i].avg=s1[i].total/5;
      printf("\t%.2f ",s1[i].total);
      printf("\t%.2f%% \n",s1[i].avg);
    }
}
