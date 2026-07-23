#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0;
    int base = 1;   // represents 2^0
    int remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        // get the last digit (0 or 1)
        remainder = binary % 10;
        // add remainder * current power of 2
        decimal = decimal + remainder * base;
        // move to next power of 2
        base = base * 2;
        // remove last digit
        binary = binary / 10;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}