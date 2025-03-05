#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	printf('Check if numbers from 1 to 10 is even or odd");
	for(int i=1;i<=10;i++)
	{
	if(num%2==0)
	{
		printf("%d Even Number",num);
	}
	else
	{
		prinf("%d Odd Number",num);
	}
	}
	return 0;
}
