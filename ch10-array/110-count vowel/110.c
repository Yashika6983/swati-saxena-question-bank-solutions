#include <stdio.h>

int main()
{
    int i, count = 0;
    char name[20];

    printf("Enter the name: ");
    scanf("%19s", name);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'e' ||
            name[i] == 'A' || name[i] == 'I' || name[i] == 'E' || name[i] == 'O' || name[i] == 'U')
        {
            count++;
        }
    }

    printf("Number of vowels = %d\n", count);

    return 0;
}