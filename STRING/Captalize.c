#include<stdio.h>
#include<ctype.h>
void main(){
    char str[25];
    printf("Enter string:\n");
    scanf("%[^\n]s",str);
    int i=0;
    while(str[i]!='\0'){
        if(isspace(str[i]>0)){
            str[i+1]-=32;
        }
        i++;
    }
    printf("%s",str);

}