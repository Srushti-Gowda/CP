#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

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
        reverse = (reverse * 10) + remainder;
        n = n / 10;
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}
