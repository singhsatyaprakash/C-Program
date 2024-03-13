/*Implement a function subStrEnd(S, T), which returns 1 if the sub-string T occurs at the end of string S and zero otherwise. Write an algorithm and a C program to read the string from the user and display an appropriate message in the calling program.*/
#include <stdio.h>
#include <string.h>

int subStrEnd(char *S, char *T) {
    int S_length = strlen(S);
    int T_length = strlen(T);

    if (T_length > S_length) {
        return 0;
    }
   int i=S_length-T_length,j=0;
   while(S[i]!='\0'){
    if(S[i]!=T[j]){

        return 0;
    }
    j++;
    i++;
   } 
   return 1;
}

int main() {
    char S[100], T[100];

    printf("Enter the string S: ");
    scanf("%[^\n]s", S);

    printf("Enter the string T: ");
    fflush(stdin);
    scanf("%[^\n]s", T);

    if (subStrEnd(S, T)) {
        printf("String T occurs at the end of string S.\n");
    } else {
        printf("String T does not occur at the end of string S.\n");
    }

    return 0;
}
