#include<stdio.h>
int main()
{
 int i,j,lim,num;
 
 printf("Enter the number you want to print table upto that: " );
 scanf("%d",&num);
 printf("limit of each table: ");
 scanf("%d",&lim);

 for(i=1;i<=num;i++)
 { 
    printf("Table of %d:\t",i);
    for(j=1;j<=lim;j++)
	{
	  printf("\t%d",i*j);
	}
	printf("\n");
 }
 return 0;
}
