#include<stdio.h>
int main()
{
  int num,fac=1,n;
  printf("Enter the number");
  scanf("%d",&num);
  n=num;
 while(num!=0)
 {
   fac=fac*num;
   num--;
 }
 printf("Factorial of %d: %d",n,fac);

 return 0;
}
