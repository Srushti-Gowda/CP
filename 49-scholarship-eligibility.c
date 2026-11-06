#include <stdio.h>

int main() {
    int age, marks;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    
    if (age < 22 && marks >= 75) {
        printf("You are eligible for the scholarship.\n");
    } else {
        printf("You are not eligible for the scholarship.\n");
    }

    return 0;
}
