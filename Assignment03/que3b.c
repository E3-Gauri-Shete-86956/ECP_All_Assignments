#include<stdio.h>
int main()
{
 int num=9362;
 int a,b,c,d;

 a=num/1000;
 num=num%1000;

 b=num/100;
 num=num%100;

 c=num/10;
 num=num%10;
 
 d=num;

 printf("%d %d %d %d\n",d,c,b,a);

 return 0;
}
