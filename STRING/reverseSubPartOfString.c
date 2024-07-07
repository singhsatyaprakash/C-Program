#include <stdio.h>
#include <string.h>

void reverseSubstring(char str[], int start, int end) {
    // Validate start and end indices
    if (start < 0 || end >= strlen(str) || start > end) {
        printf("Invalid indices.\n");
        return;
    }

    // Reverse the substring
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    int start, end;

    // Input string, start index, and end index
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter start index: ");
    scanf("%d", &start);
    printf("Enter end index: ");
    scanf("%d", &end);

    // Reverse substring
    reverseSubstring(str, start, end);

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
