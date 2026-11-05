#include <stdio.h>

int main() {
    float side1, side2, side3, perimeter;

    printf("Enter the length of three sides: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    
    perimeter = side1 + side2 + side3;

    printf("Perimeter of the triangle = %.2f\n", perimeter);

    return 0;
}
