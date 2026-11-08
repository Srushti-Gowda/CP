#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Loop runs from 1 to n to accumulate the sum
    while (i <= n) {
        sum = sum + i;
        i++; // Move to the next number
    }

    printf("Sum of numbers from 1 to %d = %d\n", n, sum);

    return 0;
}
