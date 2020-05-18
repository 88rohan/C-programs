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
        case 'a' : 
        case 'A' :
                  printf("%c is a Vowel.",ch);
                  break;
        case 'e' :
        case 'E' :
                  printf("%c is a Vowel.",ch);
                  break;
        case 'i' :
        case 'I' :
                  printf("%c is a Vowel.",ch);
                  break;
        case 'o' :
        case 'O' :
                  printf("%c is a Vowel.",ch);
                  break; 
        case 'u' :
        case 'U' :
                  printf("%c is a Vowel.",ch);
                  break;
        default : printf("%c is a Consonant.",ch);
      }
    getch();
    return 0;
}