#include<stdio.h>
#include<string.h>
int check(char [],char []);
int main(){
    char str[]="ABCDD";
    char arr[]="aBCDD";
    if(check(str,arr)){
        printf("Strings are equal");
    }
    else{
        printf("String are not equal");
    }
    return 0;
}
int check(char str[],char arr[]){
    if(strlen(str)==strlen(arr)){
        int i=0;
        while(str[i]!='\0'){
            if(str[i]!=arr[i]){
                return 0;
            }
            i++;
        }
        return 1;
    }
    else
    return 0;
}