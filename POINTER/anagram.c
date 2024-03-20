#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[25],ana[25];
    printf("String 1:");
    scanf("%[^\n]s",str);
    printf("String 2:");
    fflush(stdin);
    scanf("%[^\n]s",ana);
    int i=0;
    int count=0;
    if(strlen(str)==strlen(ana)){
    while(str[i]!='\0'){
        for(int j=0;ana[j]!='\0';j++){
        if(tolower(str[i])==tolower(ana[j])){
            count++;
            ana[j]='#';
        }
        }
        i++;
    }
    }
    if(strlen(str)==count){
        printf("It is anagram");
    }
    else
    printf("It is not a anagram");
}