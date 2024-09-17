/*Modify above program to accept number as command line arguments.*/

#include<stdio.h>
#include<stdlib.h>
void print_binary(char num)
{
	unsigned char mask = 0x80;

	while(mask)
	{
		if(num & mask)
			printf("1");
		else
			printf("0");
		mask = mask >> 1;
	}
	printf("\n");
}


int main(int argc,char*argv[])
{
	if(argc!=2)
	{
	 printf("Usages: %s <number>\n",argv[0]);
	}
	return 1;

	char num=(char)atoi(argv[1]);
	print_binary(num);

	return 0;
}






















