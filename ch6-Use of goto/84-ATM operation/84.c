#include <stdio.h>
#include <conio.h>

int main()
{
    char pin[5];
    int balance = 5000;
    int debit, credit;
    int ch = 1;

    // PIN entry
    printf("Enter your 4 digit pin: ");
    for (int i = 0; i < 4; i++) {
        pin[i] = getch();
        printf("*");
    }
    pin[4] = '\0';
    printf("\n");

    // Validate PIN (example: 1234)
    if (pin[0] == '1' && pin[1] == '2' && pin[2] == '3' && pin[3] == '4') {
        printf("PIN accepted!\n");
    } else {
        printf("Invalid PIN, Try again!\n");
        return 1;
    }

    while (ch != 4)
    {
        printf("\nEnter your choice for the operation:\n");
        printf("1. Enter 1 to check balance.\n");
        printf("2. Enter 2 for withdrawal.\n");
        printf("3. Enter 3 for deposit.\n");
        printf("4. Enter 4 to exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Your account balance is %d\n", balance);
                break;

            case 2:
                printf("Enter the amount for withdrawal: ");
                scanf("%d", &debit);

                if (debit % 100 == 0) {
                    if (debit > balance) {
                        printf("Insufficient balance in the account.\n");
                    } else {
                        balance = balance - debit;
                        printf("The account balance after debit is %d.\n", balance);
                    }
                } else {
                    printf("Amount must be in multiples of 100.\n");
                }
                break;

            case 3:
                printf("Enter the amount to credit: ");
                scanf("%d", &credit);
                balance += credit;
                printf("Your account balance is %d\n", balance);
                break;

            case 4:
                printf("Thank you for your visit!\n");
                break;

            default:
                printf("Invalid choice.\n");
                break;
        }
    }

    return 0;
}