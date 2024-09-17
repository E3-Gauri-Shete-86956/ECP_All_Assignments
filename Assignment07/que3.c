#include<stdio.h>
int sumOfColumn(int arr[][10], int col, int m);
int sumOfRow(int arr[][10], int col, int m);

int main()
{
    int arr[10][10], m, n, row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
       	{
	    printf("arr[%d][%d]= ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
   
    printf("Array:");
    for(int i=0;i<m;i++)
    {
     for(int j=0;j<n;j++)
     {
     printf("%-4d",arr[i][j]);
     }
     printf("\n");
    }

    printf("Enter the row number to calculate sum (0-based index): ");
    scanf("%d", &row);
    printf("Sum of row %d = %d\n", row, sumOfRow(arr, row, n));

    printf("Enter the column number to calculate sum (0-based index): ");
    scanf("%d", &col);
    printf("Sum of column %d = %d\n", col, sumOfColumn(arr, col, m));

    return 0;
}

int sumOfRow(int arr[][10], int row, int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[row][i];
    }
    return sum;
}


int sumOfColumn(int arr[][10], int col, int m)
{
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += arr[i][col];
    }
    return sum;
}

