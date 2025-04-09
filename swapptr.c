//write a program to swap two numbers using pointers
#include<stdio.h>
int main()
{
	int num1,num2,*ptr1,*ptr2,temp;
	printf("Enter the first number");
	scanf("%d",&num1);
	printf("Enter second number");
	scanf("%d",&num2);
	ptr1=&num1;
	ptr2=&num2;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("After swapping:");
	printf("The first number = %d",*ptr1);
	printf("The second number = %d",*ptr2);
	return 0;
}
