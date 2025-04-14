#include<stdio.h>
//fibonacci() to print the fibonacci series upto n
int fibonacci()
{
	int a=0,b=1,c,n=10;
	printf ("Fibonacci Series= %d %d ",a,b);
	for(int i=0;i<n;i++)
	{
		c=a+b;
		//swapping the values
		a=b;
		b=c;
		printf("%d ",c);
	}
	return 0;
}
//main function 
int main()
{
	int n;
	printf("Enter value of n");
	scanf("%d",&n);
	fibonacci();
	return 0;
}

