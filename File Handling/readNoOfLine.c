#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    FILE *fp=fopen("read.txt","r");
    int count=0;
    int ch;
    if(fp!=NULL){
        while((ch = fgetc(fp)) != EOF){
        //    while(!feof(fp)){
        //     ch=fgetc(fp);
            if(ch == '\n'){ 
                count++;
            }
        }
    }
    fclose(fp);
    printf("Total number of lines are: %d\n",count);
    return 0;
}
