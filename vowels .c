#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    clrscr();
    printf("Enter a alphabet = ");
    scanf("%c",&ch);
    switch(ch)
      {
        case 'a' : printf("%c is a Vowel.",ch);
                 break;
        case 'e' : printf("%c is a Vowel.",ch);
                 break;
        case 'i' : printf("%c is a Vowel.",ch);
                 break;
        case 'o' : printf("%c is a Vowel.",ch);
                 break; 
        case 'u' : printf("%c is a Vowel.",ch);
                 break;
        default : printf("%c is a Consonant.",ch);
      }
    getch();
    return 0;
}