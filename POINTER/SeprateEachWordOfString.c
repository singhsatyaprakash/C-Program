
#include <stdio.h>

int main() {
    char str[100], wstr[25][100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    int i = 0, j = 0, k = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            wstr[j][k] = str[i];
            k++;
        } else if (k > 0) { // Check if k > 0 to handle consecutive spaces
            wstr[j][k] = '\0';
            j++;
            k = 0;
        }
        i++;
    }
    if (k > 0) { // Terminate the last word
        wstr[j][k] = '\0';
        j++;
    }
    
    for (int i = 0; i < j; i++) {
        printf("%s\n", wstr[i]);
    }
    
    return 0;
}
