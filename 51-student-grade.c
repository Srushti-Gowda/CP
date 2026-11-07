#include <stdio.h>

int main() {
    int sub1, sub2, sub3;
    float average;

    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    // Calculate the average of three subjects
    average = (sub1 + sub2 + sub3) / 3.0;

    printf("Average Marks = %.2f\n", average);

    // Determine grade based on average marks
    if (average >= 85) {
        printf("Grade: Distinction\n");
    } else if (average >= 60) {
        printf("Grade: First Class\n");
    } else if (average >= 35) {
        printf("Grade: Pass\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
