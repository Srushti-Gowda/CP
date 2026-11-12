#include <stdio.h>

int main() {
    int number, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Factors of %d are: ", number);

    // Loop runs from 1 to the given number
    while (i <= number) {
        // Check if i divides the number completely without remainder
        if (number % i == 0) {
            printf("%d ", i);
        }
        i++; // Move to the next number
    }
    printf("\n");

    return 0;
}
