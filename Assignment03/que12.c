#include<stdio.h>
int main()
{
 int base;
 int index;
 int res=1;

 printf("Enter the base value:");
 scanf("%d",&base);

 printf("Enter the index:");
 scanf("%d",&index);

 for(int i=1;i<=index;i++)
 {
  res=res*base;
 }
 printf("%d^%d=%d\n",base,index,res);
}
