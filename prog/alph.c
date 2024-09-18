#include<stdio.h>

void main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("You entered an uppercase letter.\n");
    } else if(ch >= 'a' && ch <= 'z') {
        printf("You entered a lowercase letter.\n");
    } 
        
    }

   
