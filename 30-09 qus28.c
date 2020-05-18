#include<stdio.h>
int main()
{
    int i,n;
    printf("Find the logic behind the question.\n\n");
    printf("The question is:\n");
      for(i=2;i<=10;i++)
      {
        n=i*i+i*i;
        printf("\t%d + %d = %d\n",i,i,n);
    }
    printf("\n\nThe logic is:\n");
    printf("\tLet, a=2\n\t  => a*a = 2*2 = 4\n\t  => 4+4 = 8");
    return 0;
}