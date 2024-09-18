#include<stdio.h>
void main()
{
    int p,c,b,m,co;
    float per;
    printf("enter 5 sub marks: ");
    scanf("%d %d %d %d %d",&p,&c,&b,&m,&co);
    per=((p+c+b+m+co)/5);
    printf("percentage = %.2f\n",per);
    if (per>=90)
    {
        printf("GRADE A");
    }
    else if(per>=80)
    {
        printf("GRADE B");
    }
    else if(per>=70)
    {
        printf("GRADE C");
    }
    else 
    {
        printf("FAIL");
    }
    
}