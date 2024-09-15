/*Write a function to reverse the array elements.*/

#include<stdio.h>
#include<stdlib.h>
void reverse_array(int arr[],int len);
void accept_array(int arr[],int len);
void print_array(int arr[],int len);

int main()
{
 int n;
 int arr[n];
 printf("Enter value of n:");
 scanf("%d",&n);
 
int*ptr=(int*)malloc(n*sizeof(int));

 accept_array(arr,n);
 print_array(arr ,n);
 reverse_array(arr,n);
 return 0;

 free(arr);
}

void accept_array(int arr[],int len)
{
 printf("Enter the array elements\n");
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

void reverse_array(int arr[],int len)
{
 printf("Reverse array:");
 for(int i=len-1;i>=0;i--)
 {
  printf("%-4d",arr[i]);
 }
 printf("\n");
}
