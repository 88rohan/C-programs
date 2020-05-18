#include<stdio.h>
void main()
{
    char ch;
    FILE *fp;
    fp = fopen("file2.txt","r");
    ch=fgetc(fp);
    while(1)
    {
       if(ch==EOF)
            break;
       printf("%c",ch);
       ch=fgetc(fp);
    }
    fclose(fp);
}
