#include<stdio.h>

int main() {
    char g = '*';
    
    printf("\n  %c  ", g);
    printf("\n %c%c%c", g, g, g);
    printf("\n%c   %c", g, g);
    return 0;
}