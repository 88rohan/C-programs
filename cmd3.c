#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int i,s;
    for(i=0;i<argc;i++)
    {
        if(i<i/2)
        {
            (int)(argv[i])=(atoi)(argv[i])+(atoi)(argv[argc-i]);
            (int)(argv[argc-i])=(atoi)(argv[i])-(atoi)(argv[argc-i]);
            (int)(argv[i])=(atoi)(argv[i])-(atoi)(argv[argc-i]);
        }
    }
    printf("\nSwapped array is :\n");
    for(i=1;i<argc;i++)
    {
        printf("%d ",(atoi)(argv[i]));
    }
}

