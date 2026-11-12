#include <stdio.h>

int main() {
    int number, i = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Loop runs from 1 to less than the given number
    while (i < number) {
        // Check if i is a proper divisor of number
        if (number % i == 0) {
            sum = sum + i; // Add divisor to sum
        }
        i++; // Move to the next number
    }

    // Check if the sum of divisors equals the original number
    if (sum == number && number > 0) {
        printf("%d is a Perfect number.\n", number);
    } else {
        printf("%d is not a Perfect number.\n", number);
    }

    return 0;
}
