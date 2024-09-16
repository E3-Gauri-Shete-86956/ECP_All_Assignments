#include<stdio.h>
int main()
{
 int n1,n2,rem=1;
 printf("Enter value of n1: ");
 scanf("%d",&n1);
 printf("Enter value of n2: ");
 scanf("%d",&n2);

 while(rem!=0)
 {
   rem=n1 % n2;
   if(rem!=0)
   {
     n1=n2;
	 n2=rem;
   }
 }
 printf("GCD: %d\n",n2);
 return 0;
}
