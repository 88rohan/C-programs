#include<stdio.h>
#include<string.h>
#include<math.h>
struct bank
{
  char name[20];
  int ac;
  float fd,year,it,si,total,ci,ctotal;
};
void main()
{
  struct bank b[3];
  int i;
  for(i=0;i<3;i++)
  {
    printf("Enter name of customer: ");
      fflush(stdin);
      gets(b[i].name);
    printf("Enter account number: ");
      scanf("%d",&b[i].ac);
    printf("Enter Fixed deposit amount : ");
      scanf("%f",&b[i].fd);
    printf("Enter year of FD : ");
      scanf("%f",&b[i].year);
    printf("Enter Intrest rate : ");
      scanf("%f",&b[i].it);
    printf("\n");
  }
  printf("\nFixed account details are:\n");
  printf("Sl.no. Name\t\tAccount no.   F.D. Amount   Intrest rate   Year of F.D.   Simple Intrest   Amount(SI+P)   Compound Intrest   Amount(CI+P)\n");
    for(i=0;i<3;i++)
    {
      printf(" %d",i+1);
      printf("     %s",b[i].name);
      printf("\t%d ",b[i].ac);
      printf("   %.f ",b[i].fd);
      printf("\t    %.2f",b[i].it);
      printf("\t   %.1f",b[i].year);
      b[i].si=(b[i].fd*b[i].year*b[i].it)/100;
      b[i].total=b[i].fd+b[i].si;
      printf("\t\t  %.2f ",b[i].si);
      printf("\t   %.2f",b[i].total);
      b[i].ctotal=b[i].fd*pow((1+b[i].it/100),b[i].year);
      b[i].ci=b[i].ctotal-b[i].fd;
      printf("\t  %.2f ",b[i].ci);
      printf("\t     %.2f\n",b[i].ctotal);
    }
}
