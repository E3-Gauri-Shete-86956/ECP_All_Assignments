#include<stdio.h>
int main()
{
  int i,j,row,col;
  printf("Enter rows: ");
  scanf("%d",&row);
  printf("Enter columns: ");
  scanf("%d",&col);

  for(i=1;i<=row;i++)
  {
    for(j=1;j<=col;j++)
	{
	  printf("* ");
    }
	printf("\n");
  }
  return 0;
}
