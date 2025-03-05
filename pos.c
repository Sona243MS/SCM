#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	if(num>0)
	{
		printf("Positive number %d",num);
	}
	else if(num<0)
	{
		printf("Negative number %d",num);
	}
	else 
	{
		printf("Number is zero %d",num);
	}
	for(int i=0;i<num;i++)
	{
		if(num%2==0)
		{
			printf("Even number= %d",num);
		}
		else
		{
			printf("Odd number= %d",num);
		}
	}


	return 0;

}
