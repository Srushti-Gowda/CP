#include <stdio.h>

int main() {
    float attendance;

    printf("Enter your attendance percentage (0-100): ");
    scanf("%f", &attendance);

    // Check if attendance is 75% or more
    if (attendance >= 75.0) {
        printf("You have sufficient attendance. You are eligible for the exam.\n");
    } else {
        printf("Error: Attendance is less than 75%%. You are not eligible for the exam.\n");
    }

    return 0;
}
