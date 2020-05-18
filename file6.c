#include<stdio.h>
int main()
{
    int i;
    char ch[50];
    FILE *fp;
    fp=fopen("file2.txt","r");
    fseek(fp,-11,SEEK_END);
    printf("%d\n\n",ftell(fp));
    while((ch[i]=fgetc(fp))!=EOF)
    {
        printf("%c",ch[i]);
    }
    rewind(fp);
    printf("\n\n");
    while((ch[i]=fgetc(fp))!=EOF)
    {
        printf("%c",ch[i]);
    }
    fclose(fp);
    return 0;
}
