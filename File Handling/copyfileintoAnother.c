#include<stdio.h>
int main(){
    FILE *fp1=fopen("sample.txt","r");
    FILE *fp2=fopen("copy.txt","w+");
    char ch;
    if(fp1!=NULL&&fp2!=NULL){
        while((ch=fgetc(fp1))!=EOF){
            fputc(ch,fp2);
        }
        rewind(fp2);
            while((ch=fgetc(fp2))!=EOF){
            printf("%c",ch);
        }
        fclose(fp1);
        fclose(fp2);
    }


}