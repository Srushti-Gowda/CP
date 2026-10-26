#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a > b) {
        printf("%d is larger than %d\n", a, b);
    } else if (b > a) {
        printf("%d is larger than %d\n", b, a);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
