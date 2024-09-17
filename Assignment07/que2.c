#include<stdio.h>
void acceptArray(int rows, int cols, int arr[rows][cols]);
void printArray(int rows, int cols, int arr[rows][cols]);
void addMatrices(int result[3][3], int a[3][3], int b[3][3]);
void multiplyMatrices(int result[3][3], int a[3][3], int b[3][3]);
void subtractMatrices(int result[3][3],int a[3][3], int b[3][3]);

int main() {
    int a[3][3], b[3][3];
    int result[3][3];

    
    printf("Enter elements for the first 3x3 matrix (Matrix A):\n");
    acceptArray(3, 3, a);

    printf("Enter elements for the second 3x3 matrix (Matrix B):\n");
    acceptArray(3, 3, b);

    addMatrices(result, a, b);
    printf("Matrix A + Matrix B:\n");
    printArray(3, 3, result);

    subtractMatrices(result, a, b);
    printf("Matrix A - Matrix B:\n");
    printArray(3, 3, result);

    multiplyMatrices(result, a, b);
    printf("Matrix A * Matrix B:\n");
    printArray(3, 3, result);

    return 0;
}

void acceptArray(int rows, int cols, int arr[rows][cols]) 
{
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
	{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printArray(int rows, int cols, int arr[rows][cols])
{
    printf("The array is:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
       	{
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int result[3][3], int a[3][3], int b[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
       	{
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}


void subtractMatrices(int result[3][3],int a[3][3], int b[3][3])


{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
       	{
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrices(int result[3][3], int a[3][3], int b[3][3])

{
    for (int i = 0; i < 3; i++)
   
    {
        for (int j = 0; j < 3; j++) 
	
	{
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
	    {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

