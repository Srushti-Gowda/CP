#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check the type of triangle based on its sides
    if (side1 == side2 && side2 == side3) {
        // All sides are equal
        printf("It is an Equilateral triangle.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        // Any two sides are equal
        printf("It is an Isosceles triangle.\n");
    } else {
        // All sides are different
        printf("It is a Scalene triangle.\n");
    }

    return 0;
}
