#include<stdio.h>
#include<string.h>
struct employee
{
  char name[20], id[10];
  float pf,ha,da,gs,it,salary,pfp,hap,itp,dap,ns;
};
void employee(struct employee *);
int main()
{
  struct employee e;
  int *ptr;
  ptr=&e;
    printf("Enter name of employee : ");
    fflush(stdin);
    gets(e.name);
    printf("Enter employee ID number : ");
    scanf("%s",&e.id);
    printf("Enter basic salary of employee : ");
    scanf("%f",&e.salary);
    printf("Enter percentage for DA : ");
    scanf("%f",&e.dap);
    printf("Enter percentage for HA : ");
    scanf("%f",&e.hap);
    printf("Enter percentage for PF : ");
    scanf("%f",&e.pfp);
    printf("Enter percentage for IT : ");
    scanf("%f",&e.itp);
    e.da=(e.salary*e.dap)/100;
    e.ha=(e.salary*e.hap)/100;
    e.gs=e.salary+e.da+e.ha;
    e.pf=(e.gs*e.pfp)/100;
    e.it=((e.gs-e.pf)*e.itp)/100;
    e.ns=e.gs-e.pf-e.it;
   employee(ptr);
   return 0;
}
void employee(struct employee *pt)
{
   printf("\nEmployee Details:\n");
   printf("\nName\tID\tBasic salary\tDA\tHA\tGross Galary\tPF\tIT\tNet Salary\n\n");
     printf(" %s ",pt->name);
     printf(" %s ",pt->id);
     printf(" %.2f ",pt->salary);
     printf(" %.2f ",pt->da);
     printf(" %.2f ",pt->ha);
     printf(" %.2f ",pt->gs);
     printf(" %.2f ",pt->pf);
     printf(" %.2f ",pt->it);
     printf(" %.2f ",pt->ns);
}
