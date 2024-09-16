#include<stdio.h>
int main()
{
 int num=9362;
 int a,b,c,d;
 int Add;
 a=num/1000;
 num=num%1000;

 b=num/100;
 num=num%100;

 c=num/10;
 num=num%10;
 
 d=num;

 Add=a+b+c+d;
 printf("%d + %d + %d + %d=%d\n",a,b,c,d,Add);
 return 0;
 
}
