#include<stdio.h>
void main()
{
    FILE *f1,*f2;
    int i;
    char name[500],ch;
    f1=fopen("file2.txt","w");
    printf("Enter your data : ");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        fputc(name[i],f1);
    }
    printf("File is complicated.");
    fclose(f1);
    f1=fopen("file2.txt","r");
    f2=fopen("file3.txt","w");
    while(ch!=EOF)
    {
        ch=getc(f1);
        fputc(ch,f2);
    }
    fclose(f1);
    fclose(f2);
}
