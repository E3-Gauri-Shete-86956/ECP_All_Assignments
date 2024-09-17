/*Write a function to swap two numbers using XOR operation.*/


#include<stdio.h>
void swap(int *p1,int*p2);
int main()
{
int n1,n2;
printf("Enter the two numbers:");
scanf("%d%d",&n1,&n2);

printf("Before swap:n1=%d,n2=%d\n",n1,n2);
swap(&n1,&n2);
printf("After swap:n1=%d,n2=%d\n",n1,n2);
return 0;
}

void swap(int *p1,int*p2)
{
 * p1=*p1^*p2;
 *p2=*p1^*p2;
 * p1=*p1^*p2;

}
