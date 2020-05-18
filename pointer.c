#include<stdio.h>
#include<string.h>
struct employee
{
  char name[20], id[10];
  float pf,ha,da,gs,it,salary,pfp,hap,itp,dap,ns;
};
void employee(struct employee *[]);
int main()
{
  int n,i;
  //printf("Enter number of employees : ");
  //scanf("%d",&n);
  struct employee e[3];
  int *ptr;
  ptr=e;
  for(i=0;i<3;i++)
  {
    printf("Enter name of employee : ");
    fflush(stdin);
    gets(e[i].name);
    printf("Enter employee ID number : ");
    scanf("%s",&e[i].id);
    printf("Enter basic salary of employee : ");
    scanf("%f",&e[i].salary);
    printf("Enter percentage for DA : ");
    scanf("%f",&e[i].dap);
    printf("Enter percentage for HA : ");
    scanf("%f",&e[i].hap);
    printf("Enter percentage for PF : ");
    scanf("%f",&e[i].pfp);
    printf("Enter percentage for IT : ");
    scanf("%f",&e[i].itp);
    e[i].da=(e[i].salary*e[i].dap)/100;
    e[i].ha=(e[i].salary*e[i].hap)/100;
    e[i].gs=e[i].salary+e[i].da+e[i].ha;
    e[i].pf=(e[i].gs*e[i].pfp)/100;
    e[i].it=((e[i].gs-e[i].pf)*e[i].itp)/100;
    e[i].ns=e[i].gs-e[i].pf-e[i].it;
    printf("\n");
   }
   employee(&ptr);
   return 0;
}
void employee(struct employee *pt[3])
{
   int i;
   printf("\nEmployee Details:\n");
   printf("\nName\tID\tBasic salary\tDA\tHA\tGross Galary\tPF\tIT\tNet Salary\n\n");
    for(i=0;i<3;i++)
   {
     printf(" %s ",pt[i]->name);
     printf(" %s ",pt[i]->id);
     printf(" %.2f ",pt[i]->salary);
     printf(" %.2f ",pt[i]->da);
     printf(" %.2f ",pt[i]->ha);
     printf(" %.2f ",pt[i]->gs);
     printf(" %.2f ",pt[i]->pf);
     printf(" %.2f ",pt[i]->it);
     printf(" %.2f ",pt[i]->ns);
     printf("\n");
   }
}
