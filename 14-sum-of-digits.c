#include <stdio.h>

int main() {
    int n, remainder, sum = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
