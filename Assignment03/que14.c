#include<stdio.h>
int main()
{
  int num,flag=0;
  printf("Enter the number: ");
  scanf("%d",&num);

  for(int i=2;i<num/2;i++)
  {
    if(num%i==0)
	{
	  flag=1;
      break;
	}
  }

  if(flag==0)
    printf("Number is prime number");
  else
   printf("Number is not prime number");
 return 0;
}
