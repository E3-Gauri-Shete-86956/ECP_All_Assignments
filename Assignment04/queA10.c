/*Write function to check whether given year is leap or not. Write another function to print number of days in given month.*/

#include <stdio.h>
int getDaysInMonth(int month, int year) ;
int isLeapYear(int year);
int main() 
{
    int year, month, days;

    
    printf("Enter the year: \n");
    scanf("%d", &year);

    printf("Enter the month (1-12): \n");
    scanf("%d", &month);

    days = getDaysInMonth(month, year);

    if (days == -1) {
        printf("Invalid month entered.\n");
    } else {
        printf("The number of days in month %d of year %d is: %d\n", month, year, days);
    }

    return 0;
}

int isLeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        return 1;
    } else 
    {
        return 0;
    }
}


int getDaysInMonth(int month, int year) 
{
    int days;

    switch (month) 
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if (isLeapYear(year))
	    {
                days = 29;
            } else
	    {
                days = 28;
            }
            break;
        default:
            days = -1;
    }
    return days;
}

