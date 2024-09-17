#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[64] = "I AM STUDENT OF DESD COURSE :";
	char substr[4] = "am";

	char *ptr = strstr(str,substr);

	printf("str = %u\n",str);
	printf("ptr = %u\n",ptr);
	printf("ptr = %s\n",ptr);
    return 0;
}
