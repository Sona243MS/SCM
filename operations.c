#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,add,mult,div,mod;
	double pow;
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
	mod=a%b;
	printf("Remainder= %d",mod);
	pow=pow(a,b);
	printf("Power= %.1f",pow);
	return 0;
}
