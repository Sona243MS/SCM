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
    {int i,j,r,c,value,sum=0,mult=1;
	    printf("Case for Matrix\n");
	    printf("Enter the number of rows");
	    scanf("%d",&r);
	    printf("Enter the number of columns");
	    scanf("%d",&c);
	    int a[r][c];
	    for(i=0;i<r;i++)
	    {
		    for(j=0;j<c;j++)
		    {
		 printf("Enter a[%d][%d]=",i,j);
	    scanf("%d",&value);
			    a[i][j]=value;
			    sum+=a[i][j];
			    mult*=a[i][j];
		    }
	    }
	    printf("Sum=%d \n",sum);
	    printf("Product=%d",mult);
    }
break;
}
default:
printf("INVALID INPUT");
return 0;
}


