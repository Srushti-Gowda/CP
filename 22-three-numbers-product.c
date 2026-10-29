#include <stdio.h>

int main() {
    int a, b, c, product;

    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    product = a * b * c;

    printf("Product = %d\n", product);

    return 0;
}
