#include <stdio.h>

int main() {
    float balance = 1000.0, amount;
    int choice;

    printf("1. Deposit\n2. Withdraw\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter deposit amount: ");
        scanf("%f", &amount);
        balance += amount;
    } else {
        printf("Enter withdrawal amount: ");
        scanf("%f", &amount);
        if(amount <= balance) balance -= amount;
        else printf("Insufficient funds!\n");
    }
    printf("Current Balance: %.2f\n", balance);
    return 0;
}