#include<stdio.h>
int calculator()
{
    int a=10,b=5;
    printf("Sum= %d \n",(a+b));
    printf("Difference(if b>a)= %d \n",(b-a));
     printf("Difference(if a>b)= %d \n",(a-b));
    printf("Product= %d \n",(a*b));
    printf("Quotient(if a>b)= %d \n",(a/b));
    printf("Quotient(if b>a)= %d \n",(b/a));
    return 0;
}

