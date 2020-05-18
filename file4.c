#include<stdio.h>
void main()
{
    int i;
    char ch[50];
    FILE *fp;
    fp = fopen("file2.txt","a");
    printf("Enter a string : ");
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        fputc(ch[i],fp);
    }
    fclose(fp);
}
