#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    original = n;

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        remainder = n % 10;
        reversed = (reversed * 10) + remainder;
        n = n / 10;
    }

    if (original < 0) {
        printf("%d is not a palindrome number.\n", original);
    } else if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
