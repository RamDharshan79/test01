#include <stdio.h>

int main() {
    int choice;
    float balance = 10000.0; // initial balance
    float deposit, withdraw;

    printf("***********************\n");
    printf("     ATM MACHINE\n");
    printf("***********************\n");

    while (1) {
        printf("\nSelect an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour current balance is: ₹%.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to deposit: ₹");
                scanf("%f", &deposit);
                if (deposit <= 0) {
                    printf("Invalid amount! Please enter a positive value.\n");
                } else {
                    balance += deposit;
                    printf("₹%.2f deposited successfully.\n", deposit);
                    printf("Updated balance: ₹%.2f\n", balance);
                }
                break;

            case 3:
                printf("\nEnter amount to withdraw: ₹");
                scanf("%f", &withdraw);
                if (withdraw <= 0) {
                    printf("Invalid amount! Please enter a positive value.\n");
                } else if (withdraw > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= withdraw;
                    printf("Please collect your cash: ₹%.2f\n", withdraw);
                    printf("Remaining balance: ₹%.2f\n", balance);
                }
                break;

            case 4:
                printf("\nThank you for using our ATM!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please select a valid option.\n");
        }
    }
}
