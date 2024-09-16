#include<stdio.h>
int main()
{
 int number,num,n=1;
 printf("Enter the number: ");
 scanf("%d",&number);
 num=number;
 while(num!=0)
 {
   if(n*num==number)
   {
      printf("%d * %d = %d\n",n,num,number);
	  n++;
   }
   else
     num--;
 }
 return 0;
}
