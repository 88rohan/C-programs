#include<stdio.h>
#include<conio.h>
int main()
{
    int p,D,N;
    clrscr();
    printf("Enter price of item = Rs ");
    scanf("%d",&p);
    D=(p*20)/100;
    N=p-D;
    printf("Discount = %d\n",D);
    printf("Net price after discount of 20%% = Rs %d",N);
    getch();
    return 0;
}
