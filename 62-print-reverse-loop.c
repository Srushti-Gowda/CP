#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Numbers in reverse order:\n");
    
    // Loop runs as long as n is greater than or equal to 1
    while (n >= 1) {
        printf("%d\n", n);
        n--; // Decrement n by 1 after each print
    }

    return 0;
}
