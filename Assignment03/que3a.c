#include<stdio.h>
int main()
{
 int n,num=0,sum=0,temp;
 printf("Enter the number");
 scanf("%d",&num);
 temp=num;
 
 while(num!=0)
 {
   n=num%10;
   sum=sum+n;
   num=num/10;
 }
 printf("Addition of number %d : %d",temp,sum);
return 0;
}
