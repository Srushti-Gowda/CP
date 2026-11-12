#include <stdio.h>

int main() {
    int base, exponent, i;
    long long result = 1;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent (power): ");
    scanf("%d", &exponent);

    // Multiply base by itself exponent times
    for (i = 1; i <= exponent; i++) {
        result = result * base;
    }

    printf("%d raised to the power %d = %lld\n", base, exponent, result);

    return 0;
}
