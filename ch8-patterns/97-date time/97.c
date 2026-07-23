#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *now = localtime(&t);
    char buffer[100];

    // format: DD-MM-YYYY HH:MM:SS
    strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", now);
    printf("Current Date and Time: %s\n", buffer);

    return 0;
}