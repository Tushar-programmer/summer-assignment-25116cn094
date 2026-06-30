#include <stdio.h>

struct BankAccount {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount user;
    int choice;
    float amount;

    printf("Create Bank Account\n");

    printf("Enter Account Number: ");
    scanf("%d", &user.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", user.name);

    user.balance = 0;

    do {
        printf("\n--- Bank Account System ---");
        printf("\n1. Deposit");
        printf("\n2. Withdraw");
        printf("\n3. Check Balance");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                user.balance += amount;
                printf("Amount deposited successfully!\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= user.balance) {
                    user.balance -= amount;
                    printf("Withdrawal successful!\n");
                } else {
                    printf("Insufficient balance!\n");
                }
                break;

            case 3:
                printf("\nAccount Number: %d", user.accNo);
                printf("\nName: %s", user.name);
                printf("\nCurrent Balance: %.2f\n", user.balance);
                break;

            case 4:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}