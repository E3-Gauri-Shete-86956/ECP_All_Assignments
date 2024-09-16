#include<stdio.h>
int main()
{
 int num,n=1;
 printf("Enter the number");
 scanf("%d",&num);

printf("factors of number %d:\n",num);
 while(n!=num+1)
 {
   if(num%n==0)
     printf("\t%d",n);
   
   n++;
 }
 printf("\n");
 return 0;
}
