#include <stdio.h>

int main() {
    int number, i = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Loop runs from 1 to the given number
    while (i <= number) {
        // Check if i is a factor of number
        if (number % i == 0) {
            sum = sum + i; // Add the factor to sum
        }
        i++; // Move to the next number
    }

    printf("Sum of factors of %d = %d\n", number, sum);

    return 0;
}
