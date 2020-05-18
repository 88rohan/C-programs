#include<stdio.h>
#include<string.h>
 struct student
 {
   int roll;
   char name[10];
   int age;
   double marks;
 };
 void main()
 {
   struct student s;
   printf("enter roll no. : ");
   scanf("%d",&s.roll);
   printf("enter name : ");
   fflush(stdin);
   gets(s.name);
   printf("enter age : ");
   scanf("%d",&s.age);
   printf("enter marks : ");
   scanf("%lf",&s.marks);
   printf("Details of %s is:",s.name);
   printf("\n%d",sizeof(s));
 }
