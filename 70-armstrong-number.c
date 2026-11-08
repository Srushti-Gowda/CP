#include <stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &number);

    // Store original number to check against the final result
    originalNumber = number;

    // Loop to extract digits and calculate the sum of their cubes
    while (number != 0) {
        remainder = number % 10;
        result = result + (remainder * remainder * remainder); // Cube of digit
        number = number / 10;
    }

    // Check if the original number equals the calculated result
    if (originalNumber == result) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}
