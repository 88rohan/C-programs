#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv)
{
    int i,max=0;
    for(i=0;i<argc;i++)
    {
        //(int)argv[i]= (atoi)(argv[i]);
        if(string_to_int(argv[i])>max)
            max=argv[i];
    }
    printf("Maximum number is %d",max);
    return 0;
}
