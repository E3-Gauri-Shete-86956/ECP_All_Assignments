/*Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.*/
#include<stdio.h>

int main()
{
 float unit_price=5;
 int quantity;
 float total_price;
 float discount;

 printf("enter the quantity:");
 scanf("%d",&discount);

 total_price = quantity*unit_price;

 if(quantity>50)
 {
  discount=0.15;
 }
 else if(quantity>30)
 {
   discount=0.10;
 }

 total_price = total_price - (total_price*discount);
 printf("the total price is :Rs %.2f\n",total_price);

 return 0;
}
