#include<stdio.h>
/*                          //using Using logical operators
int main()
{
int year;
printf("Enter the year:");
scanf("%d",&year);

if((year%4==0) && (year%100!=0)|| (year%400==0))
{
  printf("it is  leap year ,it cantain 366 days\n");
}

else
{
  printf("it is non leap year it cantain 365 days\n");
}

}*/


   /*             //using Conditional operator
int main()
{
  int year;
  printf("Enter the year:");
  scanf("%d",&year);

  (year%4==0 && year%100!=0)? printf("it is leap year,it contain 366 days\n") : (year%400==0)? printf("it is leap year,it contain 366 days\n"):printf("it is non leap year it contain 365 days\n");

 return 0;
}*/


int main()
{
                                      //using if else condition
  int year;
  printf("Enter the year:");
  scanf("%d",&year);
  
  if(year%400==0)
  {
    printf("it is leap year,it contain 366 days\n");
  }
 else if(year%100==0)
  {
    printf("it is non leap year it contain 365 days\n");
  }
 else if(year%4==0)
  {
    printf("it is leap year ,it contain 366 days\n");
  }
  else
  {
   printf(" it is non leap year ,it contain 365 days");
  }
return 0;
}
