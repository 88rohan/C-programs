#include<stdio.h>
#include<string.h>
struct library
{
  char name[10],book[10];
  int roll,d1,m1,y1,d2,m2,y2;
  float charge;
};
void main()
{
  struct library l[3];
  int i,d,k;
  for(i=0;i<1;i++)
  {
    printf("Enter names of student: ");
      scanf("%s",&l[i].name);
    printf("Enter roll number: ");
      scanf("%d",&l[i].roll);
    printf("Book name: ");
      scanf("%s",&l[i].book);
    printf("Enter issue date(dd/mm/yyyy) : ");
      scanf("%d/%d/%d",&l[i].d1,&l[i].m1,&l[i].y1);
    printf("Enter return date(dd/mm/yyyy) : ");
      scanf("%d/%d/%d",&l[i].d2,&l[i].m2,&l[i].y2);
  }
  printf("Details students are:\n");
  printf("Sl.no.\tName\tRoll no.\tBook Name\tTaken date\tReturn date\tChargable days\tExtra charge\n");
    for(i=0;i<1;i++)
    {
      printf(" %d",i+1);
      printf("\t%s ",l[i].name);
      printf("\t%d ",l[i].roll);
      printf("\t\t%s ",l[i].book);
      printf("\t%d-%d-%d",l[i].d1,l[i].m1,l[i].y1);
      printf("\t%d-%d-%d",l[i].d2,l[i].m2,l[i].y2);
     if(l[i].m1==01||03||05||07||10||12)
      {
        d=31;
      }
    else if(l[i].m1==02)
      {
        d=28;
      }
    else if(l[i].m1==04||06||11)
      {
        d=30;
      }
    if(l[i].m1!=l[i].m2)
     {
       if((l[i].m2-l[i].m1)>1)
       {
         l[i].charge=((d-l[i].d1)+l[i].d2-15+(30*(l[i].m2-l[i].m1-1)))*2;
         printf("\t%d",((d-l[i].d1)+l[i].d2-15+(30*(l[i].m2-l[i].m1))));
       }
       else
       {
         l[i].charge=((d-l[i].d1)+l[i].d2-15)*2;
         printf("\t%d",((d-l[i].d1)+l[i].d2-15));
       }
       printf("\t%.2f\n",l[i].charge);
     }
     if(l[i].m1==l[i].m2)
     {
         if((l[i].d2-l[i].d1)>15)
      {
          l[i].charge=(l[i].d2-l[i].d1-15)*2;
          printf("\t%d",(l[i].d2-l[i].d1-15));
          printf("%.2f",l[i].charge);
      }
      else
        printf("\t00");
        printf("\t00");
     }
   }
}
