/*write a function to display given number in binary format.*/

#include<stdio.h>

void print_binary(char num)
{
	unsigned char mask = 0x80;
	printf("%d : ", num);
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


int main(void)
{
	char num = 127;

	print_binary(num);

	return 0;
}






















    
