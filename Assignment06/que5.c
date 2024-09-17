#include<stdio.h>
#include<string.h>

int main(void)
{
  char str[20] ="PG - DESD";
  char ch;
  char *ptr;

  printf("Enter character : ");
  scanf("%c",&ch);

  printf("str = %s [%u]\n",str,str);

  ptr = strchr(str,ch);
  if(ptr == NULL)
          printf("character is not found\n");

  else
  {
          printf("character is found\n");
		  printf("ptr = %u\n",ptr);
		  printf("*ptr = %c\n",*ptr);
		  printf("ptr = %s\n",ptr);

  }

  return 0;

}  
