#include<stdio.h>
int main()
{
  int row,i,j,a;
  printf("Enter the row: ");
  scanf("%d",&row);

  for(i=1;i<=row;i++)
  { 
    a=65;
    for(j=i;j<=row;j++)
	{
	  printf("%c ",a);
	  a++;
	}
	printf("\n");
  }
  return 0;
}
