#include<stdio.h>
void main()
{
    int speed,distance,time;
    printf("enter the distance travelled");
    scanf("%dkm" , &distance);
    printf("enter the time taken");
    scanf("%ds", &time);
    speed=distance/time;
    printf("the speed = %d kms",speed);
}