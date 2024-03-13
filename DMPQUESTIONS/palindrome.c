/*Design a UDF using pointer and that returns 1 if the string is a palindrome otherwise zero. Accept a string from user in the calling program. Display an appropriate message in the calling program. Implement a C program for the same. Ignore the case.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int IsPalin(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    char *cptr = str;
    while (i <= j) {
        if (tolower(*(cptr + i)) != tolower(*(cptr + j))) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main() {
    char str[25];
    printf("Enter a string: ");
    fflush(stdin);
    scanf("%[^\n]s", str);
    if (IsPalin(str)) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    return 0;
}
