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
	
