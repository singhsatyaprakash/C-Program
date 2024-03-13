#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[100];
    printf("Ente a string:");
    scanf("%[^\n]s",str);
    char *ptr=str;
    int i=0;
    while(*(ptr+i)!='\0'){
        if(isspace(*(ptr+i))>0){
            i++;
        if(*(ptr+i)>='a'&& *(ptr+i)<='z'){
            *(ptr+i)-=32;
        }
        }
    i++;
    }
    printf("%s",str);
}