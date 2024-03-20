#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    puts("Enter string:");
    gets(str);
    char ch;
    printf("Enter a char which you want to replace by $:");
    scanf("%c",&ch);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==ch){
            str[i]='$';
        }
        i++;
    }
    puts(str);
    return 0;
}