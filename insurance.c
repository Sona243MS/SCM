#include<stdio.h>
int main()
{
	char ge,ms;
	int age;
	printf("Enter Marital status(M/N) :\n");
	scand("%c",&ms);
	printf("Enter gender(M/F) :\n");
	scanf("%c",&ge);
	printf("Enter age:\n");
	scanf("%d",&age);
if(ms=='M')
{
	printf("The driver is insured");
}
else if(ge=='M' && age>30 && ms=='N')
{
	printf("Driver is insured");
}

