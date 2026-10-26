#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n > 0) {
        printf("%d is a positive number.\n", n);
    } else if (n < 0) {
        printf("%d is a negative number.\n", n);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
