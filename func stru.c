#include<stdio.h>
#include<string.h>
struct marks
{
    char name[30];
    int roll;
    float m1,m2,m3,m4,m5,total,per;
};
void marks(struct marks[],int);
int main()
{
    int n,i;
    printf("Enter number of students : ");
    scanf("%d",&n);
    struct marks m[n];
    for(i=0;i<n;i++)
    {
        printf("Details of %d student :\n",i+1);
        printf("Enter name : ");
        fflush(stdin);
        gets(m[i].name);
        printf("Enter roll number : ");
        scanf("%d",&m[i].roll);
        printf("Enter marks : ");
        scanf("%f%f%f%f%f",&m[i].m1,&m[i].m2,&m[i].m3,&m[i].m4,&m[i].m5);
        printf("\n");
    }
    marks(m,n);
    return 0;
}
void marks(struct marks s[],int n)
{
    printf("Total marks and percentage are :\n\n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s",s[i].name);
        printf("\t%d",s[i].roll);
        s[i].total=s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
        printf("\t%.2f",s[i].total);
        s[i].per=s[i].total/5;
        printf("\t%.2f",s[i].per);
        printf("\n");
    }
}
