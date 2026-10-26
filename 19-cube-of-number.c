#include <stdio.h>

int main() {
    int number, cube;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    cube = number * number * number;

    printf("Cube of %d = %d\n", number, cube);

    return 0;
}
