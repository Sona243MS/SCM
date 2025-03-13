#include<stdio.h>
int main()
{
	int n[3][3],m[3][3],i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value of n[%d][%d]: ",i,j);
			scanf("%d",&n[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value of m[%d][%d]: ",i,j);
			scanf("%d",&m[i][j]);
		}
		}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		sum+=n[i][j]+m[i][j];
	}
}
printf("%d",sum);
return 0;
}
