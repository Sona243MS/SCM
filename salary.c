#include<stdio.h>
int main()
{
    int bs;
    float da,hra,gs;
    printf("Enter basic salary");
    scanf("%d",&bs);
    da=(bs*40)/100;
    hra=(bs*20)/100;
    gs=bs+da+hra;
    printf("Gross Salary is= %d ",gs);
    return 0;
}

