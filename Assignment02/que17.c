//Write a program to display day of week from given date (day, month and year).

#include<stdio.h>
int main()
{
 int day,month,year;

 printf("Enter day :");
 scanf("%d",&day);
 printf("Enter month :");
 scanf("%d",&month);
 printf("Enter year :");
 scanf("%d",&year);
 
 if(month<3)
 {
  month +=12;
  year--;
 }


int day_of_week=(day+(13*(month+1)/5)+(year%100)+((year%100)/4)+((year/100)/4)+5*(year/100))%7;

 switch(day_of_week)
 
 {
  case 0:printf("The day is saturday.\n");
         break;
 case 1:printf("The day is sunday.\n");
         break;
 case 2:printf("The day is monday.\n");
         break;
 case 3:printf("The day is tuesday.\n");
         break;
 case 4:printf("The day is Wednesday.\n");
         break;
 case 5:printf("The day is Thursday.\n");
         break;
 case 6:printf("The day is friday.\n");
         break;
 
 }

return 0;
}
