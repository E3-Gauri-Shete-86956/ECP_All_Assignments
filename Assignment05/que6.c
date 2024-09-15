/*Write a function to remove duplicate elements from the array. After processing the array should
store only the unique elements consecutively. Also function should return the number of unique
elements into the array.*/

#include <stdio.h>


int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int uniqueCount = 1;

    
    for (int i = 1; i < n; i++) {
        int j;
        
        for (j = 0; j < uniqueCount; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }

         
        if (j == uniqueCount) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    return uniqueCount;
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    int uniqueCount = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    printArray(arr, uniqueCount);

    printf("Number of unique elements: %d\n", uniqueCount);

    return 0;
}
