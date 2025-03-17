#include<stdio.h>
int main()
	int yr;
	printf("Enter year");
	scanf("%d",&yr);
if((yr%4==0)&&(yr%100!=0)||(yr%4==0))
{
	printf("%d is a leap year",yr);
}

