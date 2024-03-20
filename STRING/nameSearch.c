/*Develop a C program to accept the names in a 2-D array and then search a name entered by the user. Display an appropriate message to the output screen if found.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int compstr(char s1[], char s2[]) {
    int i = 0;
    if (strlen(s1) == strlen(s2)) {
        while (s1[i] != '\0') {
            if (tolower(s1[i]) != tolower(s2[i])) {
                return 0;
            }
            i++;
        }
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    char names[n][25];
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]s", names[i]);
    }
    char sname[25];
    printf("Enter the name to search: ");
    scanf(" %[^\n]s", sname);
    for (int i = 0; i < n; i++) {
        if (compstr(names[i], sname)) {
            printf("%s name found\n", sname);
            break;
        }
        else
        printf("Name not found.");
    break;
    }

    return 0;
}
