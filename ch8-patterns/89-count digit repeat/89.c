#include <stdio.h>

int main()
{
    int number, digit, remainder, count = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the digit: ");
    scanf("%d", &digit);

    while (number > 0)
    {
        remainder = number % 10;

        if (remainder == digit)
        {
            count++;
        }

        number = number / 10;   // Move this outside the if block
    }

    printf("The digit %d occurs %d time(s).\n", digit, count);

    return 0;
}