#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    FILE *fp=fopen("Data.txt","w+");
    char ch;
    int pcnt=0;
    char str[200];
    gets(str);
    if(fp!=NULL){
        fputs(str,fp);
        rewind(fp);
        do{
            ch=fgetc(fp);
            if(ispunct(ch)>0){
                pcnt++;
            }
        }while(ch!=EOF);
        printf("No. of puntuation is:%d",pcnt);
        fclose(fp);
    }
    return 0;
}