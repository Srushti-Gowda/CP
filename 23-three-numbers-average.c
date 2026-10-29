#include <stdio.h>

int main() {
    int a, b, c, average;

    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    average = (a + b + c) / 3;

    printf("Average = %d\n", average);

    return 0;
}
