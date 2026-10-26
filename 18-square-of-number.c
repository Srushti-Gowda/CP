#include <stdio.h>

int main() {
    int number, square;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    square = number * number;

    printf("Square of %d = %d\n", number, square);

    return 0;
}
