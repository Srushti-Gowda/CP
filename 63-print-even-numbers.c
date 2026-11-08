#include <stdio.h>

int main() {
    int i = 1;

    printf("Even numbers between 1 and 20:\n");

    // Loop runs from 1 to 20
    while (i <= 20) {
        // Check if the current number is even
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++; // Move to the next number
    }

    return 0;
}
