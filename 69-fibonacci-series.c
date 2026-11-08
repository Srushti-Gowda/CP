#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0, i = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Loop runs until it prints n terms requested by the user
    while (i <= n) {
        printf("%d, ", t1);
        nextTerm = t1 + t2; // Calculate the next number
        t1 = t2;            // Move t2 value into t1
        t2 = nextTerm;      // Move nextTerm value into t2
        i++;
    }
    printf("\n");

    return 0;
}
