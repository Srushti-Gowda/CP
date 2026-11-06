#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    
    if (marks >= 35) {
        printf("Congratulations! You passed the exam.\n");
    } else {
        printf("Sorry! You failed the exam.\n");
    }

    return 0;
}
