#include <stdio.h>

int main() {
    int n1, n2, result;

    printf("Enter two integers: ");
    if (scanf("%d %d", &n1, &n2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    result = n1 * n2;

    printf("Product = %d\n", result);

    return 0;
}
