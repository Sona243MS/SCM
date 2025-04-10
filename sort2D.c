#include<stdio.h>
int main()
{
	// Function to sort a 2D array
void sort2DArray(int rows, int cols, int arr[rows][cols]) {
    int totalElements = rows * cols;

    // Treat the 2D array as 1D array for sorting
    int *ptr = &arr[0][0];

    // Bubble sort algorithm
    for (int i = 0; i < totalElements - 1; i++) {
        for (int j = 0; j < totalElements - i - 1; j++) {
            if (ptr[j] > ptr[j + 1]) {
                // Swap elements
                int temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}
// Function to print the 2D array
void printArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nOriginal array:\n");
    printArray(rows, cols, arr);

    sort2DArray(rows, cols, arr);

    printf("\nSorted array:\n");
    printArray(rows, cols, arr);

    return 0;
}


