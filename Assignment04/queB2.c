#include<stdio.h>
int my_power(int b,int exp);

int main()
{
 int base=2;
 int index=3;

 printf("power:%d\n",my_power(base,index));

 return 0;

}

int my_power( int b , int exp)
{
	if(exp == 0 )
		return 1;
	else if (exp == 1)
		return b;
	else
        return b * my_power(b , exp-1);
}
