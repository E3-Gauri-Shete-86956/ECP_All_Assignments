//Write a function to calculate sum and product into a single function.
//a. Using global variables (for resuls)
/*
#include<stdio.h>

int add=0;
int mul=0;
void calculate(int *pn1 , int *pn2)
{

 add=*pn1+*pn2;
 mul=(*pn1) * (*pn2);
 
}

void calculate(int *pn1 ,int*pn2);
int main()
{
        int num1,num2;
        printf("Enter two number:");
        scanf("%d%d",&num1,&num2);

        calculate(&num1,&num2);

	 printf("add=%d\n",add);
 	printf("mul=%d\n",mul);
return 0;
}
*/

//Write a function to calculate sum and product into a single function.
//b. Without using global variables
#include<stdio.h>

void calculate(int n1 , int n2,int *add,int* mul)
{
 
 *add=n1+n2;
 *mul= n1*n2;

}

void calculate(int n1 ,int n2, int *add,int* mul);
int main()
{
	
        int num1,num2,add,mul;
        printf("Enter two number:");
        scanf("%d%d",&num1,&num2);

        calculate(num1,num2,&add,&mul);

         printf("add=%d\n",add);
        printf("mul=%d\n",mul);
return 0;
}

