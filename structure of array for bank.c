#include<stdio.h>
struct student
{
  char name[10];
  char last[10];
  int ac[20];
  float fd;
  float year;
  float it;
  float si;
  float total;
};
void main()
{
  struct student s1[3];
  int i;
  for(i=0;i<3;i++)
  {
    printf("Enter First name of customer: ");
      scanf("%s",&s1[i].name);
    printf("Enter Last name of customer: ");
      scanf("%s",&s1[i].last);
    printf("Enter account number: ");
      scanf("%d",&s1[i].ac);
    printf("Enter Fixed deposit amount : ");
      scanf("%f",&s1[i].fd);
    printf("Enter year of FD : ");
      scanf("%f",&s1[i].year);
    printf("Enter Intrest rate : ");
      scanf("%f",&s1[i].it);
  }
  printf("Fixed account details are:\n");
  printf("Sl.no.\tName\t\tAccount no.\tF.D. Amount\tIntrest rate\tYear of F.D.\tSimple Intrest\tTotal Amount\n");
    for(i=0;i<3;i++)
    {
      printf(" %d",i+1);
      printf("\t%s",s1[i].name);
      printf(" %s",s1[i].last);
      printf("\t%d ",s1[i].ac);
      printf("\t%.f ",s1[i].fd);
      printf("\t\t%.2f",s1[i].it);
      printf("\t\t%.1f",s1[i].year);
      s1[i].si=(s1[i].fd*s1[i].year*s1[i].it)/100;
      s1[i].total=s1[i].fd+s1[i].si;
      printf(" \t\t%.2f ",s1[i].si);
      printf("\t\t%.2f\n",s1[i].total);
    }
}
