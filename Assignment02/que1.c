#include<stdio.h>
int main()
{
 int numerator;
 int denominator;
 float res;

 printf("enter the value of numerator:");
 scanf("%d",&numerator);

 printf("enter the value of denominator:");
 scanf("%d",&denominator);

 if(denominator==0)
 {
   printf("Error:Division by zero is not allowed\n");
 }
 else 
 {
  res=numerator/denominator;
  printf("result=%.2f\n",res);
 }
 return 0;


}
