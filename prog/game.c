#include <stdio.h>

int main() {
    char x;
    int points = 0;

    printf("Enter a character: ");
    scanf(" %c", &x);

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
        x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
        points = 5;
    } else if (x >= '0' && x <= '9') {
        points = 10;
    } else {
        points = 0;
    }

    printf("You scored %d points.\n", points);

    return 0;
}
