#include<stdio.h>
void main()
{
  int d1,m1,y1,d2,m2,y2,r,d;
  printf("Enter date(dd/mm/yyyy) : ");
  scanf("%d%d%d",&d1,&m1,&y1);
  printf("Enter another date(dd/mm/yyyy) : ");
  scanf("%d%d%d",&d2,&m2,&y2);
  if(m1==01||03||05||07||10||12)
   {
     d=31;
   }
  if(m1==02)
   {
     d=28;
   }
  if(m1==04||06||11)
   {
     d=30;
   }
   if(m1!=m2)
   {
   if((m2-m1)>1)
    r=((d-d1)+d2-15+(30*(m2-m1-1)))*2;
   else
    r=((d-d1)+d2-15)*2;
   printf("Charge = %d",r);
   }
   if(m1==m2)
    {
      if((d2-d1)>15)
      {
          r=(d2-d1-15)*2;
          printf("%d",r);
      }
      else
        printf("00");
    }
}
