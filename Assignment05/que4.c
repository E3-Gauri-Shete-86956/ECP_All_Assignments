/*Write a function to calculate maximum of the array elements. Write another function to
calculate maximum of the array elements.*/


#include<stdio.h>
int max_number(int arr[],int len);
int main()
{
int arr[]={55,44,22,1,66,6};
printf("max value:%d\n",max_number(arr,6));
return 0;
}

int max_number(int arr[],int len)
{
 int max=arr[0];
 for(int i=0;i<len;i++)
 {
  if(arr[i]=max);

   max=arr[i];
  }
  return max;
 }



