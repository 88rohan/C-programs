#include<stdio.h>
#include<string.h>
int main()
{
  char a[]={"My name is Rohan Kumar."},c;
  int i,k=0;
  printf("The string = %s",a);
  printf("\n\nChecking of repeation of letters :\n\n");
  printf("Enter a charactor : ");
  scanf("%c",&c);
  for(i=0;i<24;i++)
  {
      if(a[i]==c)
        k++;
  }
  switch(k)
  {
      case 0 : printf("\n%c is not present in string.",c);
               break;
      default : printf("\n%c is comes %d times in string.",c,k);
                break;
  }
  return 0;
 }
