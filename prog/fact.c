#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

void main() {
    int num;

    
    printf("Enter an integer: ");
    scanf("%d", &num);
 printf("Factorial of %d is %lld\n", num, factorial(num));
    }

   
