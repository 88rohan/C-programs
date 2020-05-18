#include<stdio.h>
#include<conio.h>
int main()
{
    int a,r;
    clrscr();
    printf("Enter the date = ");
    scanf("%d",&a);
    r=a%7;
    switch(r)
      {
        case 1 : printf("On %d is Monday.\nSo, It's a working day.",a);
                 break;
        case 2 : printf("On %d is Tuesday.\nSo, It's a working day.",a);
                 break;
        case 3 : printf("On %d is Wednesday.\nSo, It's a working day.",a);
                 break;
        case 4 : printf("On %d is Thursday.\nSo, It's a working day.",a);
                 break; 
        case 5 : printf("On %d is Friday.\nSo, It's a working day.",a);
                 break;
        case 6 : printf("On %d is Saturday.\nSo, It's a weekend day.\nSo, Enjoy.",a);
                 break;
        case 0 : printf("On %d is Sunday.\nSo, It's a weekend day.\nSo, Enjoy.",a);
                 break;
      }
    getch();
    return 0;
}