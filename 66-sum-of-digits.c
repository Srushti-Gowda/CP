#include <stdio.h>

int main() {
    int number, remainder, sum = 0;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Loop runs until the number becomes 0
    while (number != 0) {
        remainder = number % 10; // Extract the last digit
        sum = sum + remainder;   // Add the digit to sum
        number = number / 10;    // Remove the last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
