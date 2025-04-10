#include<stdio.h>
int main()
{
	// Function to sort a 2D array
void sort2DArray(int rows, int cols, int arr[rows][cols]) {
    int totalElements = rows * cols;

    // Treat the 2D array as 1D array for sorting
    int *ptr = &arr[0][0];

