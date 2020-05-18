#include<stdio.h>
int main(int argc,char *argv[])
{
    int i;
    printf("Total number of arguments = %d",argc);
    printf("\n\n\tThe arguments are :\n");
    for(i=0;i<argc;i++)
    {
        printf("\t %s\n",argv[i]);
    }
}
