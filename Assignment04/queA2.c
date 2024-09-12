
#include<stdio.h>
int my_power(int b ,int exp);

int main()
{
 int base=2;
 int index=3;

 printf("power:%d\n",my_power(base,index));

 return 0;
}


int my_power(int b ,int exp)
{
 int i;
 int res=1;
 for(i=1;i<=exp;i++)
 {
  res=res*b;
 }
return res;
}
