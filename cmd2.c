#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int i,s=0;
    for(i=0;i<argc;i++)
    {
        s=s+(atoi)(argv[i]);
    }
    printf("\nSum = %d",s);
}
