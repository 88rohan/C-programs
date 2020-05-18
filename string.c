#include<stdio.h>
#include<string.h>
int main()
{
  char a[]={"My name is Khan."};
  char b[7]={"Erode"},c[7]={"Erode"},d[]={"Hai"},e[]={"Everybody"};
  int r,k;
  printf("String and it's predefined commands : \n");
  printf("Strings are :\n\t A = %s",a);
  printf("\n\t B = %s",b);
  printf("\n\t C = %s",c);
  printf("\n\t D = %s",d);
  printf("\n\t E = %s",e);
  printf("\n\nCommand and it's use :\n\n");
  r=strlen(a);
  printf("\tLength of string A = %d\n",r);
  printf("\n\tComparition between B and C :\n");
  k=strcmp(b,c);
  switch(k)
  {
    case 0 : printf("\t\tBoth strings are equal");
             break;
    default : printf("\t\tBoth strings are not equal");
    	      break;
  }
  printf("\n\n\tAddition of strings D and E = %s",strcat(d,e));
  printf("\n\n\tReverse of string A = %s",strrev(a));
  printf("\n\n\tUpper case of E = %s",strupr(e));
  printf("\n\n\tLower case of E = %s",strlwr(e));
  //printf("\n%s",strstr("is"));
  return 0;
 }
