#include <stdio.h>

int main() {
    float accountBalance = 5000.00; // Hardcoded initial balance
    float withdrawAmount;

    printf("Your current balance: $%.2f\n", accountBalance);
    printf("Enter amount to withdraw: ");
    scanf("%f", &withdrawAmount);

    // Check if enough balance is available
    if (withdrawAmount <= accountBalance) {
        accountBalance = accountBalance - withdrawAmount;
        printf("Withdrawal successful!\n");
        printf("Remaining balance: $%.2f\n", accountBalance);
    } else {
        printf("Error: Insufficient balance!\n");
    }

    return 0;
}
