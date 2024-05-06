#include<stdio.h>
#include<ctype.h>
int main(){
    FILE *fp=fopen("read.txt","r");
    char ch;
    int words=0,letter=0;
    if(fp!=NULL){
        while(!feof(fp)){
            ch=fgetc(fp);
            if(tolower(ch)>='a'&& tolower(ch)<='z'){
                letter++;
            }
                if(ch==' '){
                words++;
            }
        }
    }
    fclose(fp);
    printf("Total word in file:%d\nTotal alphabet letters in file:%d",words,letter);
    return 0;
}