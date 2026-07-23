#include <stdio.h>
#include <limits.h>  // for INT_MIN

int main() {
    int a[10];
    int i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for (i = 0; i < 10; i++) {
        int x = a[i];

        // Update max1 if x is strictly greater than max1
        if (x > max1) {
            max3 = max2;
            max2 = max1;
            max1 = x;
        }
        // Update max2 if x is less than max1 and greater than max2
        else if (x < max1 && x > max2) {
            max3 = max2;
            max2 = x;
        }
        // Update max3 if x is less than max2 and greater than max3
        else if (x < max2 && x > max3) {
            max3 = x;
        }
    }

    printf("The three highest distinct numbers are: %d, %d, %d\n", max1, max2, max3);

    return 0;
}