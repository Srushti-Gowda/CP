#include <stdio.h>

int main() {
    int number, remainder, reverse = 0;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Loop runs until the number becomes 0
    while (number != 0) {
        remainder = number % 10;          // Extract the last digit
        reverse = (reverse * 10) + remainder; // Build the reversed number
        number = number / 10;             // Remove the last digit
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}
