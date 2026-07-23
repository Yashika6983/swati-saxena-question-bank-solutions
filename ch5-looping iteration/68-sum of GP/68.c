#include <stdio.h>
#include <math.h>

int main() {
    int first_term;
    printf("Enter the first term of the series: ");
    scanf("%d", &first_term);

    int common_ratio;
    printf("Enter the common ratio of the series: ");
    scanf("%d", &common_ratio);

    int terms;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Number of terms must be positive.\n");
        return 0;
    }

    if (terms == 1) {
        printf("The sum of the GP is %d\n", first_term);
        return 0;
    }

    if (common_ratio == 1) {
        int sum = first_term * terms;
        printf("The sum of the GP is %d\n", sum);
        return 0;
    }

    int denominator = common_ratio - 1;
    int power = (int)pow(common_ratio, terms);  // still using pow, but cast
    int numerator = first_term * (power - 1);
    int sum = numerator / denominator;

    printf("The sum of the GP is %d\n", sum);

    return 0;
}