#include <stdio.h>

int main() {
    int age;
    float baseFare = 100.00; // Standard ticket price
    float finalFare;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Calculate fare discount based on age category
    if (age <= 5) {
        // Free ticket for kids
        finalFare = 0;
        printf("Ticket is free for children.\n");
    } else if (age >= 60) {
        // 50% discount for senior citizens
        finalFare = baseFare * 0.50;
        printf("50%% Senior Citizen discount applied.\n");
    } else {
        // Full fare for adults
        finalFare = baseFare;
    }

    printf("Final Ticket Fare = $%.2f\n", finalFare);

    return 0;
}
