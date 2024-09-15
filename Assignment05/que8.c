
index of the element. If element is not found it should return -1*/

#include<stdio.h>

int linear_search(int arr[],int size,int target);

int main()
{
 int arr[]={10,20,30,40,50};
 int size=sizeof(arr)/sizeof(arr[0]);
 int target=30;

 int index = linear_search(arr,size,target);
 
 if(index!=-1)
 {
  printf("Element %d found at index %d\n",target,index);
 }
 else
 {
  printf("Element %d not found in the array.\n",target);
 }

return 0;
}

int linear_search(int arr[],int size,int target)
{
 for(int i=0;i<size;i++)
 {
  if(arr[i]==target)
  {
   return i;
  }
 
 }

}

    
