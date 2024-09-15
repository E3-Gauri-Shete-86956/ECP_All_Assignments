#include <stdio.h>

int* linear_Search(int arr[], int size, int target);

int main() 

{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int* address = linear_Search(arr, size, target);

    if (address != NULL) {
        printf("Element %d found at address %p.\n", target, (void*)address);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
int* linear_Search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
       
	{
            return &arr[i]; 
        }
    }
    return NULL;
}


