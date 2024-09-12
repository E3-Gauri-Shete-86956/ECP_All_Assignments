#include<stdio.h>
int fact(int n1);
int main()
{
 int num=5;
 fact(num);
 printf("%d!=%d\n",num,fact(num));

 return 0;
}

int fact(int n1)
{
 int res=1;
 int i=1;
 for(i=1;i<=n1;i++)
 {
  res=res*i;
 }
 return res;
}
