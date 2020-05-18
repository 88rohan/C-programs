
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int i,s;
    for(i=0;i<argc;i++)
    {
        s=(atoi)(argv[i]);
        (argv[i])=(atoi)(argv[argc-i]);
        (argv[argc-i])=s;
    }
    for(i=0;i<argc;i++)
    {
        printf("%d ",(atoi)(argv[i+1]));
    }
}
