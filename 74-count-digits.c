#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Handle the special case if input number is 0
    if (number == 0) {
        count = 1;
    } else {
        // Loop runs until all digits are removed
        while (number != 0) {
            number = number / 10; // Remove the last digit
            count++;              // Increment the digit counter
        }
    }

    printf("Total number of digits = %d\n", count);

    return 0;
}
