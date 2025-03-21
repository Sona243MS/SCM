#include<stdio.h>
int main()
{
	int num,1=0,num2=1;n,t;
	printf("Enter n=");
	scanf("%d",&n);
	printf("Fibonacci Series= %d %d ",num1,num2);
	for(int i=o;i<=n;i++)
	{
		t=num1+num2;
		num1=num2;
		num2=t;
		printf("%d ",t);
	}
	return 0;
}






