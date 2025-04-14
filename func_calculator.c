#include<stdio.h>

//calculator function which adds,subtracts,multiplies and divides
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

//main function where the user enters value of a and b
int main()
{
    int a,b;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b);
    calculator();
    return 0;
}


