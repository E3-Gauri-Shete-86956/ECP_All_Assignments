/* Write a program to demonstrate use of string library functions.
a. strlen()
e. stricmp()
i. strncpy()
b. strcpy()
f. strrev()
j. strncat()
c. strcat()
g. strchr()
k. strncmp()
d. strcmp()
h. strstr()
l. strtok() */

#include<stdio.h>
#include<string.h>

size_t my_strlen(const char *s);

int main(void)
{
    char str[20];
	size_t len;

	printf("Enter string :");
	scanf("%s",str);

	printf("str = %s\n",str);

	len = my_strlen(str);
	printf("length = %d\n", len);

    return 0;
}
size_t my_strlen(const char *s)
{
   size_t length = 0;
   for(int i = 0 ; s[i] != '\0' ; i++)
           length++;
 
   return length;
}

