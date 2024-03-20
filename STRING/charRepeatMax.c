#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);

    char letter[26];
    int frequency[26] = {0}; // Initialize all frequencies to 0
    int h = 0, f = 0; // Initialize h and f
    int max = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            continue;
        }
        
        int count = 1;
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[j] == str[i]) {
                count++;
                str[j] = ' '; // Mark repeated characters as space
            }
        }

        letter[h] = str[i];
        frequency[h] = count;
        h++;
    }

    // Find the character with the highest frequency
    for (int i = 0; i < h; i++) {
        if (frequency[i] > max) {
            max = frequency[i];
            f = i;
        }
    }

    printf("Highest frequency character is: %c\n", letter[f]);
    
    return 0;
}
