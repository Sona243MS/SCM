#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter number of rows"):
        scanf("%d",&m);
	printf("Enter number of columns");
	scanf("%d",&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0,j<n;j++)
		{
			printf("a[%d][%d]=%d ",i,j,a[i][j]);
		}
		printf("\n");
	}
}
