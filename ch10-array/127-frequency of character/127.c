#include <stdio.h>

int main() {
    char str[1000];
    int freq[256] = {0};   
    int i, maxFreq = 0;
    char maxChar = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   

    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (ch != '\n') {            
            freq[ch]++;
        }
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    if (maxFreq > 0) {
        printf("Maximum occurring character: '%c'\n", maxChar);
        printf("Frequency: %d\n", maxFreq);
    } else {
        printf("String is empty.\n");
    }

    return 0;
}