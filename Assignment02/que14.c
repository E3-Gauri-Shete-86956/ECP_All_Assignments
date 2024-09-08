#include<stdio.h>
int main()
{
 int year;
 int month;
 int days;
 printf("enter the year:\n");
 scanf("%d",&year);

 printf("Enter the month:\n");
 scanf("%d",&month); 
 switch(month)
 {
	 case 1 : case 3: case 5:case 7: case 8: case 10:case 12:
		 printf("days=31");
		 break;
         case 4 : case 6: case 9: case 11:
	       	printf(" days= 30"); 
		  break;

         case 2 : if((year%4==0 && year%100!=0)||(year%400==0))
                  {
                   days=29;
                   }
                 else
                   {
                 days=28;
                  }
                 break;
 default : printf("Invalid month\n");
	   break;

           
 }
 printf("Enter the days:%d\n",days);
 return 0;
}
