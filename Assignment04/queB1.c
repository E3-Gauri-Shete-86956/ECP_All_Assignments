//Write a function to calculate factorial of a given number using recursion.


#include<stdio.h>
int fact(int n1);
int main()
{
 int num=5;
 fact(num);
 printf("%d!=%d\n",num,fact(num));
 return  0;


}

int fact(int n1)
{
if (n1>=1)
{
return n1*fact(n1-1);
}
else
{
return 1;
}
}
