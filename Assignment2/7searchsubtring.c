/*Design a UDF using pointers that takes a string and a search sub-string as its arguments and returns 1 if the first instance of the search sub-string is found in the main string otherwise returns zero. Draw a flowchart and write a C program to read a main string and a search sub-string in the calling program. Display an appropriate message to the console.*/
#include<stdio.h>
#include<string.h>
int checkSubstring(char* str, char* sub) {
    int main = 0, j = 0;
    while (*(str + main) != '\0') {
        int i = 0;
        while (*(str + main + i) == *(sub + j) && *(sub + j) != '\0') {
            i++;
            j++;
        }
        if (*(sub + j) == '\0') {
            return 1;
        }
        main++;
    }
    return 0;
}
int main(){
    char str[100];
    puts("Enter main string:");
    gets(str);
    char sub[100];
    puts("Enter sub-string:");
    gets(sub);
    if(checkSubstring(str,sub)){
        printf("The Search string %s is found.",sub);
    }
    else 
    printf("The Search string %s is NOT found.",sub);
return 0;
}