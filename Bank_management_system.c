#include <stdio.h>

struct Bank_management_system
{
    int accountNumber;
    char name[20];
    int balance;
    int deposit;
    char gender;
    int withdraw;
    int totalBalance;
};

int main()
{
    struct Bank_management_system sbi;
    int choice;
    int totalAcc = 0;
    while (1)
    {
        printf("x=====================Welcome to Sbi bank account===================x\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter the Number which you require");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createAccount(name,gender,deposit,accountNumber);
            
        case 5:
            exit(0);

    }
    

        return 0;
    }
}
