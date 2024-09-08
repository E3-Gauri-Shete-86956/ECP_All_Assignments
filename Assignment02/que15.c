//Write a program to crate four function calculator. Four functions are +, - , *, /


#include<stdio.h>
int main()
{
	

	int num1 , num2 , res ;
	char op;
	printf("Enter the 1 value : ");
	scanf("%d",&num1);
	printf("Enter the OPerator [+ , - * / ] : ");
	scanf("%*c%c",&op);
	printf("Enter the 2 value :");
	scanf("%d",&num2);

	switch( op )
	{
		case '+' :res =  num1 + num2 ;
				  printf("Add = %d \n",res);
				  break;
		case '-' :printf("Sub : %d \n",num1 - num2 );
				  break ;
		case '*' :printf("MUL : %d \n",num1 * num2 );
				  break ;
		case '/' :if(num2 != 0)
				  {
					printf("div = %d \n",num1 / num2);
				  }
				  else
				  {
					printf("Num2/ divisor is ZERO \n");
				  }
				  break ;
	         default : printf("Invalid Operator  \n");
	   				break;
	 
	}


	return 0;
}


