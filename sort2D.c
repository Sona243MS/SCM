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

