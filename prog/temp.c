#include <stdio.h>
void main()
{
    float farenheit, celsius;
    printf("enter the temp in farenheit");
    scanf("%f" , &farenheit);

    celsius = ((farenheit - 32) * 5 / 9);
    printf("the temp in celsius= %f", celsius);     
}