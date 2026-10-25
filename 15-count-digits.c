#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n == 0) {
        count = 1;
    } else {
        if (n < 0) {
            n = -n;
        }
        while (n > 0) {
            n = n / 10;
            count++;
        }
    }

    printf("Total digits = %d\n", count);

    return 0;
}
