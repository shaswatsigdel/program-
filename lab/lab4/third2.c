#include<stdio.h>
int main()
{
  char a;
  printf("enter the character ");
  scanf("%c", &a);

  if ((a>='A' && a<='Z')||(a>='a' && a<='z'))
  {
    switch(a)
      {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("%c is a vowel", a);
        break;
        default:
        printf("%c is a not vowel", a);
  }
  }
  else
  {
    printf("%c is not an vowel", a);
  }

  return 0;

}
