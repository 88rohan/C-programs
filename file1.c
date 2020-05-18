#include<stdio.h>
void main()
{
    int i;
    FILE *fp;
    fp = fopen("file2.txt","w");
    char ch[100];//="My name is Rohan kumar. I read in Kongu Engineering College, Perundurai, Erode.";
    printf("Enter a string : ");
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        fputc(ch[i],fp);
    }
    fclose(fp);
}
