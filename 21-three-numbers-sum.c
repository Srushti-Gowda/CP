#include <stdio.h>

int main() {
    int a, b, c, sum;

    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    sum = a + b + c;

    printf("Sum = %d\n", sum);

    return 0;
}
