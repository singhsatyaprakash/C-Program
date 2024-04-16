#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    char rstr[100];
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (tolower(str[i]) == 'a' && tolower(str[i + 1]) == 'n' && (str[i + 2] == ' ' || str[i + 2] == '\0')) {
            i += 3;
        } else if (tolower(str[i]) == 't' && tolower(str[i + 1]) == 'h' && tolower(str[i + 2]) == 'e' && (str[i + 3] == ' ' || str[i + 3] == '\0')) {
            i += 4;
        } else if (tolower(str[i]) == 'a' && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
            i += 2;
        } else {
            while (str[i] != ' '&& str[i] != '\0') {
                rstr[j] = str[i];
                i++;
                j++;
            }
            rstr[j++] = ' ';
        }
        if (str[i] == ' ') {//for extra space b/w word...
            i++;
        }
    }
    rstr[j] = '\0';
    
    printf("New string: %s\n", rstr);
    
    return 0;
}

