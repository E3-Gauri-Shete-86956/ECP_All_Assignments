//Write a program to display number of days in the given month and year using
//a. Using If else ladder.
//b. Using logical operators.

#include<stdio.h>
int main()
{
 int year;
 printf("Enter the year:");
 scanf("%d",&year);
 int month;
 printf("Enter the month:");
 scanf("%d",&month);

 if((month==2) && ((year%400==0)||((year%100!=0)&&(year%4==0))))
 {
 printf(" Number of days is 29\n");
 }
 else if(month==2)
 {
  printf("Number of days is 28\n");
 }
 else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
 {
  printf("Number of days is 31\n");
 }
else if(month==4||month==6||month==9||month==11)
 {
  printf("Number of days is 30\n");
 }
 else
 {
 printf("invalid month\n");
 }
return 0;
}
