#include <stdio.h>

int main()
{
    int decimal, i = 0;
    int binary[32];  // enough for a 32-bit int

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;  // store remainder
        decimal = decimal / 2;    // update number
        i++;
    }

    // Print binary in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}