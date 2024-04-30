#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp=fopen("size.txt","w+");
    printf("Enter string:");
    char str[200];
    int count=0;
    char ch;
    gets(str);
    fclose(fp);
    if(fp!=NULL){
        fputs(str,fp);
        fp=fopen("size.txt","r+");
        do{
            ch=fgetc(fp);
            if(ch!=-1){
                printf("%c",ch);
            }
        } while(ch!=EOF);
        printf("Size of the file in bytes:%d",count);
    }
    return 0;
}