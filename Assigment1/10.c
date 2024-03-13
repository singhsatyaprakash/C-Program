/*Draw a flowchart & write a C program to read names of N students into appropriate storage type then accept a name to be searched from the user and display an appropriate message if found by specifying its position. Ignore the case.
Sample Input:
Apples Mangoes Oranges Pine-Apple Jack-Fruit
Search Name: Pine-apple
Output:
Pine-apple is found at 4th position.
Search Name: Guava
Guava is not present in the list*/
#include <stdio.h>
#include <ctype.h>
#include<string.h>
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
    int i, n, found = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    char names[n][50], search[50];
    printf("Enter names of %d students:\n", n);
    for (i = 0; i < n; i++) {
        fflush(stdin);
        scanf("%[^\n]s", names[i]);
    }
    printf("Enter the name to be searched: ");
    fflush(stdin);
    scanf("%[^\n]s", search);
    for (i = 0; i < n; i++) {
        if (compstr(names[i], search) == 1) {
            found = 1;
            printf("%s is found at %dth position.\n", names[i], i + 1);
            break;
        }
    }
    if (!found) {
        printf("%s is not present in the list.\n", search);
    }
    return 0;
}
