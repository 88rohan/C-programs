#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    clrscr();
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
      { if(a>c)
          {printf("%d is biggest number.",a);}
         else
           {printf("%d is biggest number.",c);}
      }
    else if(b>a)
      {if(b>c)
         {printf("%d is biggest number.",b);}
       else 
         {printf("%d is biggest number.",c);}
      }
    getch();
    return 0;
}