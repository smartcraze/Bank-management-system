#include <stdio.h>

struct Bank_management_system
{
    int account_number;
    char name[20];
    int balance;
    int deposit;
    int withdraw;
    int total_balance;
};

int main()
{
    struct Bank_management_system sbi;
    int choice;
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
        }

        return 0;
    }
}
