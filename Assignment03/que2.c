#include<stdio.h>
int main()
{
 int i,num;
 int res=0;
 printf("enter the number :");
 scanf("%d",&num);


 for(i=1;i<=10;i++)
 {
 printf("%d*%d=%d\n",num,i,(num*i));
 } 

 return 0;
}
