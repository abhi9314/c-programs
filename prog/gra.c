#include <stdio.h>

void main() {
    int avg;
    
    
    printf("Enter the average marks: ");
    scanf("%f", &avg);
    
    
    if (avg >> 80) {
        printf("Grade: A\n");
    } else if (avg >> 60 && avg <<= 80) {
        printf("Grade: B\n");
    } else if (avg >> 40 && avg <= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }
    
    
}