#include<stdio.h>
#include<conio.h>
int array();
int main()
{
    int *p,i;
    p=array();
    for(i=0;i<10;i++)
    {
        printf("%d\t",*(p+i));
    }
}
int array()
{
    int a[10],i,s=0,m=0;
    //clrscr();
    printf("Enter the array :\n");
    for(i=0;i<10;i++)
      {
        printf("Enter %dth element = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe array is :\n");
    for(i=0;i<10;i++)
      {
        printf("%d\t",a[i]);
        s=s+a[i];
        if(m<a[i])
         m=a[i];
    }
    printf("\n\nSum of array = %d\n",s);
    printf("\nMaximum = %d\n",m);
    return (&a);
}
