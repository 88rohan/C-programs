#include<stdio.h>
union student
{
  char name[20];
  int roll;
  float marks,cgpa;
} ;
int main()
{
  union student s[3];
  int i;
  for(i=0;i<3;i++)
  {
      printf("Name of student:- ");
      scanf("%s",&s[i].name);
      printf("Roll no. :- ");
      scanf("%d",&s[i].roll);
      printf("Marks :- ");
      scanf("%f",&s[i].marks);
      printf("\n Marks = %.2f",s[i].marks);
      s[i].cgpa=s[i].marks/10;
      printf("\n CGPA = %.1f",s[i].cgpa);
      printf("\n");
   }
  printf("\nSize of union = %d",sizeof(s));
  return 0;
}
