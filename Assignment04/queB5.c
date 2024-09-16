#include<stdio.h>

void print_binary(int n);
 int main()
{
 int num;
 printf("Enter the number:");
 scanf("%d",&num);

 printf("Number in Binary format %d is:",num);
 print_binary(num);

 return 0;

}

void print_binary(int n)
{
  for(int i=31;i>=0;i--)
  {
   int bit=(n>>i)&1;
   printf("%d",bit);
  }
  printf("\n");

}
