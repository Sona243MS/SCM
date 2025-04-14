#include<stdio.h>
int fibonacci()
{
	int a=0,b=1,c,n=10;
	printf ("Fibonacci Series= %d %d ",a,b);
	for(int i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	return 0;
}


