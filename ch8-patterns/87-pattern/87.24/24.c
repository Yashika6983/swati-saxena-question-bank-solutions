#include <stdio.h>

int main() {
    int n = 5;

    // Upper half
    for (int i = 1; i <= n; i++) {

        // Leading spaces
        for (int j = 1; j < i; j++)
            printf(" ");

        // Left number
        printf("%d", i);

        // Middle spaces
        if (i != n) {
            for (int j = 1; j <= 2 * (n - i) - 1; j++)
                printf(" ");

            // Right number
            printf("%d", i);
        }

        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {

        // Leading spaces
        for (int j = 1; j < i; j++)
            printf(" ");

        // Left number
        printf("%d", i);

        // Middle spaces
        for (int j = 1; j <= 2 * (n - i) - 1; j++)
            printf(" ");

        // Right number
        printf("%d", i);

        printf("\n");
    }

    return 0;
}