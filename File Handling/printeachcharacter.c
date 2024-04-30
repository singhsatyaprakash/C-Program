#include<stdio.h>
int main(){
    FILE *fp=fopen("Sample.txt","w");
    char ch;
    fputs("Satya prakash singh",fp);
    fclose(fp);
    fp=fopen("Sample.txt","r");
    do{
        ch=fgetc(fp);
        if(ch!=-1){
            printf("%c ",ch);
        }
    } while(ch!=EOF);
}