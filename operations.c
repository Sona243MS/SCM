#include<stdio.h>
int main()
{
	int a,b,add,mult,div;
	printf("Enter first number ");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
	add=a+b;
	printf("Sum= %d",add);
	sub=a-b;
	printf("Subtract= %d",sub);
	mul=a*b;
	printf("Multiplication= %d",mul);
	div=a/b;
        printf("Division= %d",div);
	return 0;
}
