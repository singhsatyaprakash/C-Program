/*Design a UDF in C that returns 1 if the string passed to it is a palindrome otherwise zero. Draw a flowchart and implement a C program to read a string from the user and display if it’s a palindrome or not by calling the UDF. Display appropriate message.*/
#include<stdio.h>
#include<string.h>
int IsPalin(char str[]){
    int j=strlen(str)-1;
    for(int i=0;i<strlen(str)/2;i++){
        if(str[i]!=str[j])
        return 0;
    else
    return 1;
    j--;
    }
}
void main(){
    char str[25];
    scanf("%[^\n]s",str);
    if(IsPalin(str))
        printf("It is a palindorme");
    
    else
    printf("It is not a palindorme");
}