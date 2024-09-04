#include<stdio.h>
int main()
{
 int i,num;
 int res=0;
 printf("enter the number :");
 scanf("%d",&num);


 for(i=1;i<=10;i++)
 {
 // printf("%d*%d\n=%d",num,i,(num*i));
 
	 res=num*i;

printf(" res=%d\n",res);
 } 

 return 0;
}
