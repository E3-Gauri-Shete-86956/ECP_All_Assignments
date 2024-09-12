//Write a function to swap two numbers.
#include<stdio.h>
void swap(int *pn1,int *pn2);
int main()
{
int num1=10;
int num2=20;

swap(&num1,&num2);

return 0;
}

void swap(int * pn1,int * pn2)
{
 printf("Before swap:num1=%d,num2=%d\n",*pn1,*pn2);
 int temp=*pn1;
 *pn1=*pn2;
 *pn2=temp;
 printf("After swap:num1=%d,num2=%d\n",*pn1,*pn2);
 
}
