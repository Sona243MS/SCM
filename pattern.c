#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Enter the choice or case number");
	scanf("%d",&i);
	printf("Enter a");
	scanf("%d",&a);
	printf("Enter b");
	scanf("%d",&b);
	switch(i)
{
case 1:
{
    if(a>b)
        {
printf("%d is maximum",a);
    }
   else
{
    printf("%d is maximum",b);
}
break;
}
	case 2:
    {

