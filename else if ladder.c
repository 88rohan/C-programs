#include<stdio.h>
#include<conio.h>

void main()
{
    int m; 
    clrscr();
    printf("Enter your marks = ");
    scanf("%d",&m);
    if(m>100)
      {printf("Invalid marks. ");}
    else if(m>=90)
      {printf("Your grade is S.");}
    else if(m>=80)
      {printf("Your grade is A.");}
    else if(m>=70)
      {printf("Your grade is B.");}
    else if(m>=60)
      {printf("Your grade is C.");}
    else if(m>=50)
      {printf("Your grade is D.");}
    else if(m<50)
      {printf("You have to Reappear in next exam.");}
    getch();
}