#include<stdio.h>
void main()
{
    int n;
    printf("enter the no: ");
    scanf("%d",&n);
    if((n % 5==0) && (n % 11==0))
    {
        printf("number divisible by 5 and 11");
    }
    else
    {
        printf("no not divisible");
    }
}