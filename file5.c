#include<stdio.h>
int main()
{
    int i;
    char ch[500];
    FILE *fp;
    fp=fopen("file2.txt","r");
    fseek(fp,10,SEEK_SET);
    printf("%d\n\n",ftell(fp));
    while((ch[i]=fgetc(fp))!=EOF)
    {
        printf("%c",ch[i]);
    }
    fseek(fp,-20,SEEK_END);
    printf("\n\n%d\n\n",ftell(fp));
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
