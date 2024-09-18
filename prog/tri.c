#include<stdio.h>
void main()
{
    int a,b,c,sum;
    printf("enter the angles of triangle");
    scanf("%d %d %d", &a,&b,&c);
    sum=a+b+c;
    if (sum==180 & a>0 & b>0 & c>0)
    {printf("triangle valid");}
    else
    {printf("triangle invalid");
    }

    

}