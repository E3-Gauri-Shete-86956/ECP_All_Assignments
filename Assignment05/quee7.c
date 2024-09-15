/*#include <stdio.h>               //Selection sort

void selectionSort(int arr[], int len);
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, 5);

    printf("Sorted array using Selection Sort: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



void selectionSort(int arr[], int len)
{
    int i, j, minIndex, temp;

    
    for (i = 0; i < len - 1; i++) 
    {
        
        minIndex = i;
        for (j = i + 1; j < len; j++)
       	{
            if (arr[j] < arr[minIndex])
	    {
                minIndex = j;
            }
        }

      
        if (minIndex != i) 
	{
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
 }

 */  


#include <stdio.h>                    //using bubble sort

void bubble_Sort(int arr[], int len);
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_Sort(arr, 5);


    printf("Sorted array using Selection Sort: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void bubble_sort(int arr[],int len)
{
 int i,j,temp;
 for(int i=0;i<len-1;i++)
 {
  for(int j=0;j<len-i-1;j++)
  {
   if(arr[j]>arr[j+1])
   {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    }
  }
 }
}
