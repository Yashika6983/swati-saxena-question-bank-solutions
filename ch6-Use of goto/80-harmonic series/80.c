#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Enter the number of terms in series : ");
    scanf("%d", &n);

    printf("\n\n");

    if (n <= 0)
    {
        printf("Series can't have zero or negative number of terms.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            printf("1/%d", i);
            if (i < n)
            {
                printf(" + ");
            }

            sum = sum + (1 / (float)i);
        }
    }

    printf("\n");
    printf("The sum of the harmonic series is %f\n", sum);

    return 0;
}