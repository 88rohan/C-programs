#include<stdio.h>
enum month
{
  January=10,February,March,April,May,June,July,August,September,October,November,December
};
void main()
{
  enum month m;
  printf("Program on Enumerator :\n");
  m=January;
  printf("Enumerator = %d",m);
  m=March;
  printf("\nEnumerator = %d",m);
  m=July;
  printf("\nEnumerator = %d",m);
  m=December;
  printf("\nEnumerator = %d",m);
  printf("\nSize of enumetor = %d",sizeof (m));
}
