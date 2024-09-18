#include<stdio.h>
void main()
{
    int i;
    printf("enter the number: ");
    scanf("%d", &i);
    if (i>0)
    {
        printf("No. is possitive");
    }
    if (i<0)
    {
        printf("No. is negitive");
    }
    if (i==0)
    {
        printf("No. is 0");
    }
}