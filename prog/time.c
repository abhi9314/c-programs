#include <stdio.h>



void main() {
    int sec, hrs, min, *sec;

    printf("Enter the number of seconds: ");
    scanf("%d", &sec);
     hrs = sec / 3600;
   min = sec / 60;
  printf("%d seconds is equivalent to %d hours, %d minutes, and %d seconds.\n", sec, hrs, min, *sec);
}