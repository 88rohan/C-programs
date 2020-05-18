#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,D;
    //clrscr();
    printf("Enter the coefficients of quadratric equation\n");
    printf("Enter a = ");
    scanf("%f",&a);
    printf("Enter b = ");
    scanf("%f",&b);
    printf("Enter c = ");
    scanf("%f",&c);
    D=(b*b)-(4*a*c);
    printf("D = %2f\n",D);
    if(D>0)
       {
        printf("Roots are real and unequal\n");
        r1=(-b+sqrt(D))/2*a,r2=(-b-sqrt(D))/2*a;
        printf("Roots are %2f and %2f",r1,r2);
       }
    else if(D==0)
       {
        printf("Roots are real and equal\n");
        r1=(-b)/2*a,r2=(-b)/2*a;
        printf("Roots are %2f and %2f",r1,r2);
       }
    else
       {
        printf("Roots are imaginary and unequal\n");
        r1=-b/(2*a);
        r2=(sqrt(D)/(2*a));
        printf("Roots are %f  %f i and ",r1,r2);
        printf("%2f %2f i ",r1,-(r2)) ;
       }
   // getch();
    return 0;
}
