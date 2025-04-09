//c program to sort one dimensional arry in ascending order
#include<stdio.h>
int main()
{
	int arr[MAX],n,i,j;
	int temp;
	printf("Enter the total number of ekements: ");
	scanf("%d",&n);
	//read array elements
	printf("Enter array elements:\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	//sort array 
	for (i = 0; i < n; i++)
	{
        for (j = i + 1; j < n; j++) 
	{
            if (arr[i] > arr[j]) 
	    {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
