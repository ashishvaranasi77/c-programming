#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int account_No;
    double balance;
} Account;

Account *accounts = NULL;
int nAccounts = 0;
char filename[256];  // global filename

void load_accounts(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error: Could not open file '%s'.\n", filename);
        return;
    }

    free(accounts);  // free previous memory if any
    accounts = NULL;
    nAccounts = 0;
    char line[256];

    while (fgets(line, sizeof(line), file)) {
        char *name = strtok(line, ",");
        char *acc_Str = strtok(NULL, ",");
        char *bal_Str = strtok(NULL, ",");

        if (!name || !acc_Str || !bal_Str || strtok(NULL, ",")) continue;

        int account_No;
        if (sscanf(acc_Str, "%d", &account_No) != 1) continue;

        accounts = realloc(accounts, (nAccounts + 1) * sizeof(Account));
        strcpy(accounts[nAccounts].name, name);
        accounts[nAccounts].account_No = account_No;
        accounts[nAccounts].balance = atof(bal_Str);
        nAccounts++;
    }

    fclose(file);
}

void save_accounts(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        printf("Error: Could not write to file '%s'.\n", filename);
        return;
    }

    for (int i = 0; i < nAccounts; i++) {
        fprintf(file, "%s,%d,%.2f\n", accounts[i].name, accounts[i].account_No, accounts[i].balance);
    }

    fclose(file);
}

void deposit() {
    load_accounts(filename);

    int inputAccNo;
    double amount;
    printf("Enter account number to deposit: ");
    if (scanf("%d", &inputAccNo) != 1) {
        while (getchar() != '\n') continue;
        printf("Invalid input.\n");
        free(accounts);
        return;
    }

    getchar();

    int found = 0;
    for (int i = 0; i < nAccounts; i++) {
        if (accounts[i].account_No == inputAccNo) {
            printf("Account holder: %s\n", accounts[i].name);
            printf("Current balance: %.2f\n", accounts[i].balance);
            printf("Enter deposit amount: ");
            if (scanf("%lf", &amount) != 1 || amount <= 0) {
                while (getchar() != '\n') continue;
                printf("Invalid amount.\n");
                free(accounts);
                return;
            }

            double prev = accounts[i].balance;
            accounts[i].balance += amount;
            printf("Previous balance: %.2f\n", prev);
            printf("Updated balance: %.2f\n", accounts[i].balance);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account not found.\n");
    }

    save_accounts(filename);
    free(accounts);
    accounts = NULL;
}

void withdraw() {
    load_accounts(filename);

    int inputAccNo;
    double amount;
    printf("Enter account number to withdraw: ");
    if (scanf("%d", &inputAccNo) != 1) {
        while (getchar() != '\n') continue;
        printf("Invalid input.\n");
        free(accounts);
        return;
    }

    getchar();

    int found = 0;
    for (int i = 0; i < nAccounts; i++) {
        if (accounts[i].account_No == inputAccNo) {
            printf("Account holder: %s\n", accounts[i].name);
            printf("Current balance: %.2f\n", accounts[i].balance);
            printf("Enter withdrawal amount: ");
            if (scanf("%lf", &amount) != 1 || amount <= 0 || amount > accounts[i].balance) {
                while (getchar() != '\n') continue;
                printf("Invalid or insufficient amount.\n");
                free(accounts);
                return;
            }

            double prev = accounts[i].balance;
            accounts[i].balance -= amount;
            printf("Previous balance: %.2f\n", prev);
            printf("Updated balance: %.2f\n", accounts[i].balance);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account not found.\n");
    }

    save_accounts(filename);
    free(accounts);
    accounts = NULL;
}

void display() {
    load_accounts(filename);

    int inputAccNo;
    printf("Enter account number to display: ");
    if (scanf("%d", &inputAccNo) != 1) {
        while (getchar() != '\n') continue;
        printf("Invalid input.\n");
        free(accounts);
        return;
    }

    getchar();

    int found = 0;
    for (int i = 0; i < nAccounts; i++) {
        if (accounts[i].account_No == inputAccNo) {
            printf("\n--- Account Info ---\n");
            printf("Name       : %s\n", accounts[i].name);
            printf("Account No : %d\n", accounts[i].account_No);
            printf("Balance    : %.2f\n", accounts[i].balance);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account not found.\n");
    }

    free(accounts);
    accounts = NULL;
}

void exit_program() {
    printf("Exiting program.\n");
    exit(0);
}

int main() {
    printf("Enter CSV filename: ");
    scanf("%255s", filename);

    int choice;

    while (1) {
        printf("\n--- Bank Account Menu ---\n");
        printf("1. Deposit in Account\n");
        printf("2. Withdraw from Account\n");
        printf("3. Display Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n') continue;
            printf("Invalid input. Please enter a number.\n");
            continue;
        }

        getchar();

        switch (choice) {
            case 1: deposit(); break;
            case 2: withdraw(); break;
            case 3: display(); break;
            case 4: exit_program(); break;
            default: printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}
