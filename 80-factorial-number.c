#include <stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the user entered a negative number
    if (number < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        // Multiply numbers from 1 to the given number
        for (i = 1; i <= number; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}
