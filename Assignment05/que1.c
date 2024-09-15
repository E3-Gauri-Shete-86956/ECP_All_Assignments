#include<stdio.h>
int main()
{
	float marks[5],total=0,average;
	int i;
        
	printf("Enter marks of 5 subjects:\n");
	for(int i=0;i<5;i++)
	{
	 printf("subject %d:",i+1);
	 scanf("%f",&marks[i]);
	 total+=marks[i];
	}

	average=total/5;
	printf("total marks=%.2f",total);
	printf("Average marks=%.2f\n",average);
 return 0;
}
