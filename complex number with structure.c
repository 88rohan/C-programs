#include<stdio.h>
struct complex
{
  float real,img;
}c1,c2,c3;
void add(struct complex, struct complex);
void sub(struct complex, struct complex);
void mul(struct complex, struct complex);
void div(struct complex, struct complex);
void main()
{
  printf("Enter real and imaginary parts of first complex number : ");
  scanf("%f %f",&c1.real,&c1.img);
  printf("Enter real and imaginary parts of second complex number : ");
  scanf("%f %f",&c2.real,&c2.img);
  printf("Tow complex numbers are :\n");
  if(c1.img>0)
    printf(" %.f+%.fi",c1.real,c1.img);
  else
     printf(" %.f%.fi",c1.real,c1.img);
  if(c2.img>0)
     printf("\n %.f+%.fi",c2.real,c2.img);
  else
     printf("\n %.f%.fi",c2.real,c2.img);
  printf("\nArithmetic operations on complex numbers:");
  add(c1,c2);
  sub(c1,c2);
  mul(c1,c2);
  div(c1,c2);
}
void add(struct complex a1, struct complex a2)
{
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    if(c3.img>0)
      printf("\nAddition : %.f+%.fi",c3.real,c3.img);
    else
      printf("\nAddition : %.f%.fi",c3.real,c3.img);
}
void sub(struct complex s1, struct complex s2)
{
    c3.real=c1.real-c2.real;
    c3.img=c1.img-c2.img;
    if(c3.img>0)
      printf("\nSubtraction : %.f+%.fi",c3.real,c3.img);
    else
      printf("\nSubtraction : %.f%.fi",c3.real,c3.img);
}
void mul(struct complex m1, struct complex m2)
{
    c3.real=(m1.real*m2.real-m1.img*m2.img);
    c3.img=(m1.img*m2.real+m1.real*m2.img);
    if(c3.img>0)
      printf("\nMultiplication : %.f+%.fi",c3.real,c3.img);
    else
      printf("\nMultiplication : %.f%.fi",c3.real,c3.img);
}
void div(struct complex d1, struct complex d2)
{
    float z;
    c3.real=(d1.real*d2.real+d1.img*d2.img);
    z=(d2.real*d2.real+d2.img*d2.img);
    c3.img=(d1.img*d2.real-d1.real*d2.img);
    if(c3.img>0)
      printf("\nDivision : (%.f+%.fi)/%.f = %.2f+%.2fi",c3.real,c3.img,z,c3.real/z,c3.img/z);
    else
      printf("\nDivision : (%.f%.fi)/%.f = %.2f%.2fi",c3.real,c3.img,z,c3.real/z,c3.img/z);
}
