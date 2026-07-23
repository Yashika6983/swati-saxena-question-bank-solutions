#include <stdio.h>

int main()
{
    char user_name = 'u', password = 'p';
    char inp_user, inp_pass;
    int attempts = 0;
    int max_attempts = 3;

    while (attempts < max_attempts)
    {
        printf("Enter your username: ");
        scanf("%c", &inp_user);

        // consume leftover newline
        getchar();

        printf("Enter your password: ");
        scanf("%c", &inp_pass);

        if (inp_user == user_name && inp_pass == password)
        {
            printf("Access permitted!\n");
            return 0;
        }
        else
        {
            attempts++;
            printf("Invalid username or password.\n");
            if (attempts < max_attempts)
                printf("Try again! (%d attempts left)\n", max_attempts - attempts);
        }
    }

    printf("Too many failed attempts. Exiting.\n");
    return 0;
}