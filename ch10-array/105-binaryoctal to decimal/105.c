#include <stdio.h>

int convertToDecimal(int n, int base) {
    int arr[32];
    int i = 0, decimal = 0, power = 1;

    if (n == 0)
        return 0;

    while (n > 0) {
        arr[i] = n % 10;
        n = n / 10;
        i++;
    }

    for (int j = 0; j < i; j++) {
        decimal += arr[j] * power;
        power = power * base;
    }

    return decimal;
}

int main() {
    int n, choice, result;

    printf("Enter a binary or octal number: ");
    scanf("%d", &n);

    printf("Press 2 for binary to decimal, 8 for octal to decimal: ");
    scanf("%d", &choice);

    if (choice == 2) {
        result = convertToDecimal(n, 2);
        printf("Decimal = %d\n", result);
    } else if (choice == 8) {
        result = convertToDecimal(n, 8);
        printf("Decimal = %d\n", result);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}