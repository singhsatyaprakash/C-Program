#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]s",str);
    int i=0;
    while(str[i]!='\0'){
        if(tolower(str[i]))
    }
}