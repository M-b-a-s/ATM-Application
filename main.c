#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("==============================\n");
    printf("+                            +\n");
    printf("+       e-banking '23        +\n");
    printf("+        Welcome!!!!         +\n");
    printf("+                            +\n");
    printf("==============================\n");

    int acctNumber;
    int balance = 10000;

    int i = 0; char pwd, pass[5];
    printf("Please Enter Your Account Number: \n");
    scanf("%d", &acctNumber);
    printf("Please Enter Your password(4 characters max):\n");

    // secure pin
    while(pwd != 13 && i < 100){
        pass[i++] = pwd = getch();
        printf((pwd != 13)?"*":"\n");
    }
    pass[i--] = '\0';

    printf("Welcome %d\n", acctNumber);
    printf("============================");

    printf("\n\033[1;31mSelect Transaction\033[0m");
    printf("\n\033[;34m1.Check Balance\033[0m\n");
    printf("\033[;34m2.Withdraw\033[0m\n");
    printf("\033[;34m3.Deposit\033[0m\n");
    printf("\033[;34m4.Exit\033[0m\n");

    int transaction, amount;
    printf("Enter Your Choice: ");
    scanf("%d", &transaction);

    // Process User's choice
    switch (transaction)
    {
    case 1:
        printf("Balance Check\n");
        printf("Your balance is: $%d\n", balance);
        break;
    case 2:
        printf("Enter amount: ");
        scanf("%d", &amount);
        if(amount > balance){
            printf("Insufficient Balance");
        } else {
            balance -= amount;
            printf("Successful.\nRemaining Balance: $%d", balance);
        }
        break;
    case 3:
        printf("Enter amount: ");
        scanf("%d", &amount);
        balance += amount;
        printf("New Balance: $%d", balance);
        break;
    case 4:
        printf("Thank you for using the ATM. Goodbye!!!");
        break;
    default:
        break;
    }
   
    return 0;
}
