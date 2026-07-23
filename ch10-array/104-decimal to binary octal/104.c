#include <stdio.h>

void decimalToBase(int n, int base) {
    int arr[32];
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        arr[i] = n % base;
        n = n / base;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }
}

int main() {
    int n, choice;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("Press 2 for binary or 8 for octal: ");
    scanf("%d", &choice);

    if (choice == 2) {
        printf("Binary: ");
        decimalToBase(n, 2);
    } else if (choice == 8) {
        printf("Octal: ");
        decimalToBase(n, 8);
    } else {
        printf("Invalid choice");
    }

    return 0;
}