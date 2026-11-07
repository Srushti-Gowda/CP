#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    // Use ternary operator to check pass or fail condition
    (marks >= 35) ? printf("Result: Pass\n") : printf("Result: Fail\n");

    return 0;
}
