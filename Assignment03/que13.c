#include<stdio.h>
int main()
{
 int n=6;
 int a=1,b=1;
 int next;
 int i;

// printf("Enter the number:");
// scanf("%d",&n);

 if(6>=1)
 {
 printf("%d",a);
 }
 if(6>=2)
 {
  printf("%d",b);
 }

 for(i=3;i<=6;i++)
 {
  next=a+b;
  printf(",%d",next);
  a=b;
  b=next;
 }
 printf("\n");

 return 0;
}
