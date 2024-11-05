#include <stdio.h>
#include <string.h>

struct BankAccount {
    char account_holder[50];
    int account_number;
    float balance;
    char account_type;
    union {
        float interest_rate;    
        float overdraft_limit; 
    } details;
};

int main() {
    struct BankAccount acc;

  
    printf("Enter account holder name: ");
    scanf("%s", acc.account_holder);
    printf("Enter account number: ");
    scanf("%d", &acc.account_number);
    printf("Enter balance: ");
    scanf("%f", &acc.balance);
    printf("Enter account type (S for Savings, C for Current): ");
    scanf(" %c", &acc.account_type);

    if (account.account_type == 'S' || acc.account_type == 's') {
        printf("Enter interest rate for savings account: ");
        scanf("%f", &acc.details.interest_rate);
    } else if (acc.account_type == 'C' || acc.account_type == 'c') {
        printf("Enter overdraft limit for current account: ");
        scanf("%f", &acc.details.overdraft_limit);
    } else {
        printf("Invalid account type.\n");
        return 1;
    }

    
    printf("\nAccount Details:\n");
    printf("Account Holder: %s\n", acc.account_holder);
    printf("Account Number: %d\n", acc.account_number);
    printf("Balance: %.2f\n", acc.balance);
    if (acc.account_type == 'S' || acc.account_type == 's') {
        printf("Account Type: Savings\n");
        printf("Interest Rate: %.2f%%\n", acc.details.interest_rate);
    } else if (acc.account_type == 'C' || acc.account_type == 'c') {
        printf("Account Type: Current\n");
        printf("Overdraft Limit: %.2f\n", acc.details.overdraft_limit);
    }

}
