/*Write a program to read a file character by character and display its content on screen*/

#include<stdio.h>
int main(void)
{

  
	/*char arr[64] = {"PG-DESD, PG-DMC, PG-DITISS"};

	
	FILE *fp = fopen("file7.txt", "w");

	for(int i = 0 ; arr[i] != '\0' ; i++)
	fputc(arr[i], fp);
	fclose(fp);
	return 0;*/

	char ch;
	FILE *fp = fopen("file7.txt", "r");
	while((ch = fgetc(fp)) != EOF)
		printf("%c", ch);

	fclose(fp);

	return 0;
}

