#include<stdio.h>
/* 
int main()
{
	int n1,n2;
	int max;
        printf("Enter the value of n1:");
	scanf("%d",&n1);
	printf("Enter the value of n2:");
	scanf("%d",&n2);
	if(n1>n2)
	{
	 printf("n1 is maximum\n");
	}
	else
	{
	 printf("n2 is  maximum\n");
	}

	return 0;
}
*/
int main()
{
int n1,n2;
int max;
        printf("Enter the value of n1:");
        scanf("%d",&n1);
        printf("Enter the value of n2:");
        scanf("%d",&n2);

	max=(n1>n2)?printf("n1 is maximum\n"):printf("n2 is maximum\n");


}
