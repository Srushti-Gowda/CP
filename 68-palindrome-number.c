#include <stdio.h>

int main() {
    int number, originalNumber, remainder, reverse = 0;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Store the original number in a temporary variable
    originalNumber = number;

    // Loop to reverse the number
    while (number != 0) {
        remainder = number % 10;
        reverse = (reverse * 10) + remainder;
        number = number / 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNumber == reverse) {
        printf("%d is a Palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a Palindrome number.\n", originalNumber);
    }

    return 0;
}
