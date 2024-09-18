#include <stdio.h>

 void main() {
    float a, b, c, disc, po;

   
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    
    disc = b * b - 4 * a * c;

    if (disc > 0) {
        po = 20;
        printf("The equation has real roots. You earn %d points.\n", (int)po);
    } else if (disc < 0) {
        po = 10;
        printf("The equation has imaginary roots. You earn %d points.\n", (int)po);
    } else {
        po = 0;
        printf("The equation has equal roots. You earn %d points.\n", (int)po);
    }

    
}