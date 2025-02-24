#include <stdio.h>

struct BankCustomer {
    char name[50];
    int acc_no;
    float balance;
};

int main() {
    struct BankCustomer cust;

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", cust.name);
    printf("Enter Account Number: ");
    scanf("%d", &cust.acc_no);
    printf("Enter Account Balance: ");
    scanf("%f", &cust.balance);

    printf("\nBank Customer Details:\n");
    printf("Name: %s\nAccount Number: %d\nBalance: %.2f\n", cust.name, cust.acc_no, cust.balance);

    return 0;
}

