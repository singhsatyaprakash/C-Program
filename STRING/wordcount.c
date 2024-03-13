#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[25];
    printf("Enter string:");
    //scanf("%[^\n]s",str);
    gets(str);
    // char *ptr=str;
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        if(isspace(str[i])<=0 && isspace(str[i])>0){
             count++;
         }
        //printf("%c ",*(ptr+i));
                i++;
    }
    printf("Word count is:%d",count);
    return 0;
}
