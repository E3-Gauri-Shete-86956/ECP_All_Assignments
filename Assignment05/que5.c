/* Write a function to calculate maximum and minimum of the array elements.*/

#include<stdio.h>
int max_number(int arr[],int len);
int min_number(int arr[],int len);


int main()
{
int arr[]={55,44,22,1,66,6};
printf("min number:%d\n",min_number(arr,6));
printf("max value:%d\n",max_number(arr,6));
return 0;
}

int min_number(int arr[],int len)
{
 int min=arr[0];
 for(int i=0;i<len;i++)
 {
  if(arr[i]<min)
   min=arr[i];
 }
  return min;
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
	 

