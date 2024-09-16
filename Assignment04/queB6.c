#include<stdio.h>
void print_hexadecimal(int num);
int main()
{
int number;
printf("Enter the number:");
scanf("%d",&number);

printf("Number in Hexadecimal Format %d:",number);
print_hexadecimal(number);

return 0;

}

void print_hexadecimal(int num)
{
 printf("0x%X\n",num);
}
