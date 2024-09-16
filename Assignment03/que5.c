
#include<stdio.h>
int main()
{
  int num,i,fac=1,n;
  printf("Enter the number");
  scanf("%d",&num);
  
 for(int i=1;i<num;i++)
 {
   fac=fac*num;
      
 }
 printf("Factorial of %d: %d",num,fac);

 return 0;
}
