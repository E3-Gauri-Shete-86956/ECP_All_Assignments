#include<stdio.h>
int main()
{
 float fahrenheit;
 float celsius;

 printf("Enter the temp in celsius:");
 scanf("%f",&celsius);

 fahrenheit=((celsius*9)/5)+32;
 printf("temp in celsius to fahrenheit=%.2f\n",fahrenheit,celsius);

return 0;
}            
