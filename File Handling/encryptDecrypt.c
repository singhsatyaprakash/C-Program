#include<stdio.h>
int main(){
    FILE *fp1=fopen("C:\\Users\\satya\\C-Program\\C-Program\\zRandom\\rhyme.txt","r");
    FILE *fp2=fopen("encrypt.txt","w+");
    FILE *fp3=fopen("decrypt.txt","w+");
    char ch;
    // incrptying
    if(fp1!=NULL&& fp2!=NULL){
        while(ch=fgetc(fp1)!=EOF){
            if(ch=='z'){
                fputc('a',fp2);
            }
            else{
                fputc(++ch,fp2);
            }
        }
        rewind(fp2);
        printf("Encryted text:\n");
        while(ch=fgetc(fp1)!=EOF){
            printf("%c",ch);
        }       
    }
    //decrypting
        if(fp1!=NULL&& fp2!=NULL){
        while(ch=fgetc(fp2)!=EOF){
            if(ch=='a'){
                fputc('z',fp3);
            }
            else{
                fputc(--ch,fp3);
            }
        }
        rewind(fp3);
        printf("decryted text:\n");
        while(ch=fgetc(fp3)!=EOF){
            printf("%c",ch);
        }       
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

}