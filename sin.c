#include<stdio.h>
#include <math.h>

int main() {
    double input;

    // Get user input
    printf("Enter a value between 0 and 1 (non-inclusive): ");
    scanf("%lf", &input);

    // Check if the input is within the valid range
    if (input > 0 && input < 1) {
        // Calculate and print the sine value
        double sineValue = sin(input);
        printf("The sine of %.2lf is: %.4lf\n", input, sineValue);
    } else {
        printf("Invalid input. Please enter a value between 0 and 1 (non-inclusive).\n");
    }

    return 0;
}
  
