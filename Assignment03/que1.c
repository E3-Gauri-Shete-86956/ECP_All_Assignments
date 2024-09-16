#include<stdio.h>
int main()
{
 char ch;
 printf("Enter the character:\n");
 scanf("%c",&ch);

 int num;
 printf("Enter the num:\n");
 scanf("%d",&num);

 for(int i=0;i<num;i++)
{
 printf("%c",ch);
}
printf("\n");
 return 0;

}
