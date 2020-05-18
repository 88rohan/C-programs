#include<stdio.h>
#include<string.h>
struct employee
{
  char name[20], id[10];
  float pf,ha,da,gs,it,salary,pfp,hap,itp,dap,ns;
}e[];
int main()
{
  int i,n;
  printf("Enter number of employees : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
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
   printf("\nEmployee Details:\n");
   printf("\n Name\tID\tBasic salary\tDA\tHA\tGross Galary\tPF\tIT\tNet Salary\n\n");
    for(i=0;i<n;i++)
   {
     printf(" %s ",e[i].name);
     printf(" %s ",e[i].id);
     printf(" %.2f ",e[i].salary);
     printf(" %.2f ",e[i].da);
     printf(" %.2f ",e[i].ha);
     printf(" %.2f ",e[i].gs);
     printf(" %.2f ",e[i].pf);
     printf(" %.2f ",e[i].it);
     printf(" %.2f ",e[i].ns);
     printf("\n");
   }
  return 0;
}
