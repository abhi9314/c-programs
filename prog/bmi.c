#include<stdio.h>
void main()
{
    float w,h,bmi;
    printf("enter your weight in kg: ");
    scanf("%f",&w);
    printf("enter height in m: ");
    scanf("%f",&h);
    bmi=w/(h*h);
    printf("BMI=%f",bmi);
    if (bmi<18.5)
    {
        printf("U ARE UNDERWEIGHT\n");
    }
    else if(bmi<24.9)
    {
        printf("NORMAL WEIGHT\n");
    }
    else 
    {
        printf("OVERWEIGHT\n");
    }
}