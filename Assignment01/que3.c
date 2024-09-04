#include<stdio.h>
int main()
{
  char ch;
  int ascii_value;
  printf("Enter the character : ");
  scanf("%c",&ch);

  printf("Octal number = %o\n",ch);
  printf("Decimal value = %d\n",ch);
  printf("Hexadecimal value = %x\n",ch);

  printf("Enter the Ascii value:");
  scanf("%d",&ascii_value);

  printf("character for  Ascii value : %c\n",ascii_value);
  return 0;

}
