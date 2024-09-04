#include<stdio.h>

/*int main()
{                            //using multiple printf statement
int i,j,rows;
printf("Enter the number of rows:");
scanf("%d",&rows);

for(i=1;i<=rows;i++)
{
 for(j=1;j<=i;j++)
 {
  printf("* ");
 
 }
 printf("\n");
}
return 0;

}*/


//----------------------------------------------------------------
//using single printf

int main()
{
int i,j;
for(i=1;i<=5;i++)
{
 printf("%.*s\n",i,"*****");
}
return 0;
}
