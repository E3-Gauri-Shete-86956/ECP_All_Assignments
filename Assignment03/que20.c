/*Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12*/



#include <stdio.h>

int main() {

    int num, i;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Output: all factors: ");

    for(i = 1; i <= num; i++)
        if(num % i == 0)
       	{ 
            printf("%d",i);
	    {

            if(i != num) 
	    { 
                printf(", ");
            }
        }
 }

    printf("\n");

    return 0;
}



//Armstrong Numbers between 1 to 500

#include <stdio.h>
#include <math.h>

int main() {
    int num, i, sum, digit, temp;
    printf("Enter the number:");
    scanf("%d",&num);
    
    for (i = 1; i <= num; i++)
    {
        sum = 0;
        temp = num;
        
        
        while (temp > 0) {
            digit = temp % 10;
            sum += digit * digit *digit; 
           temp /= 10;
        }
        
       
        if (sum == num) 
	{
            printf("%d is an Armstrong number\n", i);
        }
    }
    
    return 0;
}

