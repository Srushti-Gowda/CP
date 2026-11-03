#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("The number is zero.\n", number);
    }

    return 0;
}
