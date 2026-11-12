
#include <stdio.h>

int main() {
    int number, remainder, product = 1;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Handle the special case if the input number is 0
    if (number == 0) {
        product = 0;
    } else {
        // Loop runs until all digits are multiplied
        while (number != 0) {
            remainder = number % 10;       // Extract the last digit
            product = product * remainder; // Multiply digit with product
            number = number / 10;          // Remove the last digit
        }
    }

    printf("Product of digits = %d\n", product);

    return 0;
}
