#include <stdio.h>

void main() {
    int i,a=1,t=1,sum=0,x;

    printf("no of terms: ");
    scanf("%d", &x);
    printf("%d\n%d\n" ,a,t);
    for (i = 0; i <=x ; i++) {
        sum=a*t;
        printf("%d\n", sum);
        a=t;
        t=sum;
        
    }
}
