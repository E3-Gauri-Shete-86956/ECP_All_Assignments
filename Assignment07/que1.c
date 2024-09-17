#include<stdio.h>
void acceptArray(int rows, int cols, int arr[rows][cols]); 
void printArray(int rows, int cols, int arr[rows][cols]);
int main()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols]; 
    acceptArray(rows, cols, arr);
    printArray(rows, cols, arr);

    return 0;

}

void acceptArray(int rows, int cols, int arr[rows][cols]) 
{
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printArray(int rows, int cols, int arr[rows][cols])
{
    printf("The array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
