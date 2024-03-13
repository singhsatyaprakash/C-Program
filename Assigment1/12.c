/*Design a UDF that deletes all the occurrences of spaces between the words and returns the modified string. Implement a C program to read the string and display the modified string in the calling program.*/
// #include<stdio.h>
// #include<ctype.h>
// void RemoveSpace(char str[]){
//     for(int i=0;str[i]!='\0';i++){
//         if(isspace(str[i])>0){
//             for(int j=i;str[j]!='\0';j++){
//                 str[j]=str[j+1];
//             }
//         }
//     }
//     return;
// }
// int main(){
//     char str[100];
//     scanf("%[^\n]s",str);
//     RemoveSpace(str);
//     printf("%s",str);
//     return 0;
// }
#include <stdio.h>
void deleteSpaces(char* str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    deleteSpaces(str);
    printf("Modified string: %s\n", str);
    return 0;
}