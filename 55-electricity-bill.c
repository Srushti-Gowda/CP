#include <stdio.h>

int main() {
    int units;
    float totalAmount;

    printf("Enter total electricity units consumed: ");
    scanf("%d", &units);

    // Calculate electricity bill based on unit slices
    if (units <= 100) {
        // Rs. 4.00 per unit for first 100 units
        totalAmount = units * 4.00;
    } else if (units <= 300) {
        // Rs. 6.00 per unit for next 200 units
        totalAmount = (100 * 4.00) + ((units - 100) * 6.00);
    } else {
        // Rs. 8.00 per unit if units exceed 300
        totalAmount = (100 * 4.00) + (200 * 6.00) + ((units - 300) * 8.00);
    }

    printf("Total Electricity Bill = Rs. %.2f\n", totalAmount);

    return 0;
}
