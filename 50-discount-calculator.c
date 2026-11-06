#include <stdio.h>

int main() {
    float billAmount, discount = 0, finalBill;

    printf("Enter total bill amount: ");
    scanf("%f", &billAmount);

    // Apply 10% discount if bill amount is 1000 or more
    if (billAmount >= 1000) {
        discount = billAmount * 0.10;
    }

    // Calculate final payable amount
    finalBill = billAmount - discount;

    printf("Discount Amount = %.2f\n", discount);
    printf("Final Bill to Pay = %.2f\n", finalBill);

    return 0;
}
