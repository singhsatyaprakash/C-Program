/*write a C Program to read N characters into an array from the user 
and then display the character with maximum ASCII value to the screen.*/
#include <stdio.h>

int main() {
    int n, i;
    char max_char;
    printf("Enter the number of characters to read: ");
    scanf("%d", &n);
    char arr[n];
    printf("Enter %d characters:\n", n);
    for (i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }
    max_char = arr[0];
    for (i = 0; i < n; i++) {
        if (arr[i] > max_char) {
            max_char = arr[i];
        }
    }
    printf("The character with maximum ASCII value is: %c\n", max_char);
    return 0;
}