#include<stdio.h>
int main()
{
	int dis,m,cm,feet,inch;
	printf("Enter distance between two places in km");
	scanf("%d",&dis);
	m=dis*1000;
	cm=dis*100000;
	feet=dis*3280;
	inch=dis*39370;
        printf("Converted to meter: %d",m);
	printf("Converted to centimeter: %d",cm);
	printf("Converted to feet: %d",feet);
	printf("Converted to inch: %d",inch);
	return 0;
}
