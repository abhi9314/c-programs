#include <stdio.h>

// Function to calculate monthly pay
float calculateMonthlyPay(float hoursPerWeek, float ratePerHour, int weeksInMonth) {
    return hoursPerWeek * ratePerHour * weeksInMonth;
}

void main() {
    float hoursPerWeek, ratePerHour;
    int weeksInMonth;

    // Input values
    printf("Enter the number of hours worked in a week: ");
    scanf("%f", &hoursPerWeek);
    printf("Enter the rate per hour: ");
    scanf("%f", &ratePerHour);
    printf("Enter the number of weeks in a month (typically 4): ");
    scanf("%d", &weeksInMonth);

    // Calculate and display monthly pay
    float monthlyPay = calculateMonthlyPay(hoursPerWeek, ratePerHour, weeksInMonth);
    printf("Monthly pay: $%.2f\n", monthlyPay);

    
}