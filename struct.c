#include<stdio.h>
 struct student
 {
   int rollno;
   char name[20];
   float marks;
   };
   typedef struct student std;
   void display(struct student std);
   int main()
   {
     std s1,s2,s3;
     printf("enter rollno name and marks");
     scanf("%d %s %f",&s1.rollno,s1.name,&s1.marks);
     printf("enter rollno name and marks");
     scanf("%d %s %f",&s2.rollno,s2.name,&s2.marks);
      printf("enter rollno name and marks");
     scanf("%d %s %f",&s3.rollno,s3.name,&s3.marks);
     display(s1);
     display(s2);
     display(s3);
     return 0;
     }
     void display(struct student std)
     {
       printf("Rollno=%d  Name=%s Marks=%.2f",std.rollno,std.name,std.marks);
       }
