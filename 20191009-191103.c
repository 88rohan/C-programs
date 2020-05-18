#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,d,e;
    float P,t; 
    clrscr();
    printf("Enter marks of subjects :\n");
    printf("Marks in Maths = ");
    scanf("%d",&a);
    printf("Marks in Science = ");
    scanf("%d",&b);
    printf("Marks in English = ");
    scanf("%d",&c);
    printf("Marks in Social Science = ");
    scanf("%d",&d);
    printf("Marks in Computer = ");
    scanf("%d",&e);
    t=a+b+c+d+e;
    printf("Total Marks = %d",t);
    P=t/5;
    printf("You got %d%%",P);
    if(P>100)
      {printf("Invalid marks. ");}
    else if(P>=90)
      {printf("Your grade is S.");}
    else if(P>=80)
      {printf("Your grade is A.");}
    else if(P>=70)
      {printf("Your grade is B.");}
    else if(P>=60)
      {printf("Your grade is C.");}
    else if(P>=50)
      {printf("Your grade is D.");}
    else if(P<50)
      {printf("You have to Reappear in next exam.");}
    else
       printf("Invalid Marks. ");
    getch();
}