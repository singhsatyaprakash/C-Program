#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    FILE *fp=fopen("read.txt","r");
    int count=0,ch,n,chr;
    printf("Enter which  position of line have to replaced:");
    scanf("%d",&n);
    char str[1000];
    printf("Enter line have to place:\n");
    fflush(stdin);
    scanf("%[^\n]s",str);
    FILE *ptr=fopen("line.txt","w+");
    if(fp!=NULL && ptr!=NULL){
        fputs(str,ptr);
        rewind(ptr);
        while((ch = fgetc(fp)) != EOF){
            if(ch == '\n'){ 
                count++;
            }
            if(count==n){
                break;
            }
        }
        while((ch=fgetc(fp))!='\n'||(chr=fgetc(ptr)!=EOF)){
        fputc(chr,fp);
        }
    }
    fclose(fp);
    fclose(ptr);
    return 0;
}
