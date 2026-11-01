#include <stdio.h>

int main() {
    float num1, num2, average;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    average = (num1 + num2) / 2;

    printf("Average of %.2f and %.2f = %.2f\n", num1, num2, average);

    return 0;
}
