#include<stdio.h>
int main()
{
 int num,rem,sum,n;
 printf("Enter the number:");
 scanf("%d",&num);
 n=num;
 while(num!=0)
 {
   rem=num%10;
   sum=sum+(rem*rem*rem);
   num=num/10;
 }
 sum==n?printf("Number %d is armstrong number",n):printf("Number %d is not armstrong number",n);
 return 0;
}
