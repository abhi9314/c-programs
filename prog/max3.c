#include<stdio.h>
void main()
{
    int a,b,c,max;
    printf("enter the three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
           max=a;
        }
        else
        {
            max=c;
        }
    }
    else
    {
        if(b>c)
        {
            max=b;
        }
        else{
            max=c;
        }
    }
    printf("the max no is %d", max);

}