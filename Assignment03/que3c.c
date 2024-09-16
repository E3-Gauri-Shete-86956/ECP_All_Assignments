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
	sum=sum*10+rem;
	num=num/10;
  }
  sum==n?printf("Number %d is palindrome",sum):printf("Number %d is not palindrome",sum);

  return 0;
}
