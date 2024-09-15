/*Write a function to accept array elements from the user. Write another function to print array
elements. Re-use these functions in rest of the assignments wherever required.*/

#include<stdio.h>
#include<stdlib.h>

void accept_array(int arr[],int len);
void print_array(int arr[],int len);

int main()
{
 int n;
int arr[n];
printf("Enter the value of n:");
scanf("%d",&n);

int*ptr=(int*)malloc(n*sizeof(int));

accept_array(arr,n);
print_array(arr,n);
return 0;
}

void accept_array(int arr[],int len)
{
printf("Enter the Array elements:\n");
for(int i=0;i<len;i++)
{
 printf("arr[%d]= ",i);
 scanf("%d",&arr[i]);
}
}
void print_array(int arr[],int len)
{
 printf("Array:");
 for(int i=0;i<len;i++)
 {
   printf("%-4d",arr[i]);
 }
   printf("\n");
 

}
